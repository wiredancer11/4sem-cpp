#include "nondetAutomaton.h"
#include <iostream>
#include <set>
#include <map>
#include <vector>
#include <algorithm>

using namespace std;

vector<set<int>> get_all_subsets(int n) {
    vector<set<int>> subsets;
    
    // Всего возможных подмножеств: 2^n
    for (int mask = 1; mask < (1 << n); ++mask) {
        set<int> subset;
        for (int i = 0; i < n; ++i) {
            if (mask & (1 << i)) {
                subset.insert(i);
            }
        }
        subsets.push_back(subset);
    }
    
    return subsets;
}

nondetAutomaton::nondetAutomaton() {
    startStateIndex = 0;
    statesAmount = 0;
}

nondetAutomaton::nondetAutomaton(const nondetAutomaton &aut) {
    statesAmount = aut.statesAmount;
    startStateIndex = aut.startStateIndex;
    acceptStates = aut.acceptStates;
    transitionMap = aut.transitionMap;
}

void nondetAutomaton::setStartState(int n) {
    startStateIndex = n;
}

void nondetAutomaton::addState() {
    statesAmount++;
}

void nondetAutomaton::addTransition(int state1, char c, int state2) {
    if (transitionMap.count({state1, c}) > 0) {
        transitionMap.at({state1, c}).insert(state2);
    } else {
        transitionMap.insert({{state1, c}, set<int> {state2}});
    }
}

void nondetAutomaton::changeTransition(int state1, char c, set<int> states) {
    if (transitionMap.count({state1, c}) > 0) {
        transitionMap.at({state1, c}) = states;
    }
}

void nondetAutomaton::delTransition(int state1, char c, int state2) {
    if (transitionMap.count({state1, c}) > 0) {
        transitionMap.at({state1, c}).erase(state2);
    }
}

void nondetAutomaton::makeAcceptState(int state) {
    acceptStates.insert(state);
}

void nondetAutomaton::removeAcceptState(int state) {
    acceptStates.erase(state);
}

void nondetAutomaton::renumberStates(map<int, int> renumMap) {
    set<int>::iterator i;
    set<int> newAcceptStates;
    map<pair<int, char>, set<int>> newTransitionMap;
    map<pair<int, char>, set<int>>::iterator j;
    set<int> transitionSet;
    set<int> newTransitionSet;
    pair<int, char> newPair;
    startStateIndex = renumMap.at(startStateIndex);
    for (i = acceptStates.begin(); i != acceptStates.end(); i++) {
        newAcceptStates.insert(renumMap.at(*i));
    }
    acceptStates = newAcceptStates;
    for (j = transitionMap.begin(); j != transitionMap.end(); j++) {
        newPair = {renumMap.at(j->first.first), j->first.second};
        transitionSet = j->second;
        for (i = transitionSet.begin(); i != transitionSet.end(); i++) {
            newTransitionSet.insert(renumMap.at(*i));
        }
        newTransitionMap.insert({newPair, newTransitionSet});
    }
    transitionMap = newTransitionMap;
}

void nondetAutomaton::doEpsilonTransitions(set<int> &activeStates) {
    set<int> availableStates;
    set<int>::iterator i, j;
    bool isInserted = false;
    for (i = activeStates.begin(); i != activeStates.end(); i++) {
        if (transitionMap.count({*i, '\0'}) > 0) {
            availableStates = transitionMap.at({*i, '\0'});
            for (j = availableStates.begin(); j != availableStates.end(); j++) {
                if (activeStates.count(*j) == 0) {
                    activeStates.insert(*j);
                    isInserted = true;
                }
            }
        }
    }
    if (isInserted) doEpsilonTransitions(activeStates);
}

bool nondetAutomaton::operator()(string s) {
    set<int> activeStates = {startStateIndex};
    doEpsilonTransitions(activeStates);
    set<int>::iterator j, k;
    set<int> newActiveStates;
    set<int> transitionStates;
    int i = -1;
    while(s[++i] != '\0') {
       for (j = activeStates.begin(); j != activeStates.end(); j++)  {
            if (transitionMap.count({*j, s[i]}) > 0) {
                transitionStates = transitionMap.at({*j, s[i]});
                for (k = transitionStates.begin(); k != transitionStates.end(); k++)  {
                    newActiveStates.insert(*k);
                }
            }
       }
       activeStates = newActiveStates;
       doEpsilonTransitions(activeStates);
       newActiveStates = {};
       if (activeStates.empty()) break;
    }

    for (j = activeStates.begin(); j != activeStates.end(); j++) {
        if (acceptStates.count(*j) > 0) return true;
    }
    return false;
}

void nondetAutomaton::operator=(nondetAutomaton &aut) {
    statesAmount = aut.statesAmount;
    startStateIndex = aut.startStateIndex;
    acceptStates = aut.acceptStates;
    transitionMap = aut.transitionMap;
}

finiteAutomaton nondetAutomaton::operator!() {
    vector<set<int>> subsets = get_all_subsets(statesAmount);
    set<int> subset;
    vector<set<int>> epsilonClosedSubsets;
    set<int> startSubset = {startStateIndex};

    int detStatesAmount = 0;
    int detStartStateIndex = 0;
    map<pair<set<int>, char>, set<int>> preDetTransitionMap;
    


    doEpsilonTransitions(startSubset);
    for (const auto &elem : subsets) {
        subset = elem;
        doEpsilonTransitions(subset);
        if (subset == elem) {
            epsilonClosedSubsets.push_back(subset);
            detStatesAmount++;
            if (subset == startSubset) detStartStateIndex = detStatesAmount - 1;
        }
    }

    finiteAutomaton aut(detStatesAmount);
    aut.setStartState(detStartStateIndex);

    for (const auto& closedSubset : epsilonClosedSubsets) {
        for (const auto& elem : closedSubset) {
            if (acceptStates.count(elem) > 0) aut.makeAcceptState(find(epsilonClosedSubsets.begin(), epsilonClosedSubsets.end(), closedSubset) - epsilonClosedSubsets.begin());
            for (const auto& transition : transitionMap) {
                if (transition.first.first == elem) {
                    if (preDetTransitionMap.count({closedSubset, transition.first.second}) == 0)
                     preDetTransitionMap.insert({{closedSubset, transition.first.second}, transition.second});
                    else
                    preDetTransitionMap.at({closedSubset, transition.first.second}).insert(transition.second.begin(), transition.second.end());

                }
            }
        }
    }
    set<int> result;
    set<int> elemEpsilonClosure;
    for (auto &transition : preDetTransitionMap) {
        if (transition.first.second != '\0') {
            result = {};
            for (const auto & elem : transition.second) {
                elemEpsilonClosure = {elem};
                doEpsilonTransitions(elemEpsilonClosure);
                result.insert(elemEpsilonClosure.begin(), elemEpsilonClosure.end());
            }
            aut.addTransition(find(epsilonClosedSubsets.begin(), epsilonClosedSubsets.end(), transition.first.first) - epsilonClosedSubsets.begin(), transition.first.second, find(epsilonClosedSubsets.begin(), epsilonClosedSubsets.end(), result) - epsilonClosedSubsets.begin());
    }
        
    }
    cout << aut;
    aut.optimize();
    return aut;
}

nondetAutomaton nondetAutomaton::operator+(nondetAutomaton &aut) {
     nondetAutomaton newAut = nondetAutomaton();
     map<pair<int, char>, set<int>>::iterator i;
     set<int>::iterator j;
     if (statesAmount == 0) return aut;
     
     if (aut.statesAmount == 0) return *this;
    
     newAut.statesAmount = statesAmount + aut.statesAmount + 1;
     newAut.addTransition(0, '\0', 1 + startStateIndex);
     newAut.addTransition(0, '\0', statesAmount + 1 + startStateIndex);


     for (const auto &state : acceptStates) {
        newAut.acceptStates.insert(state + 1);
     }


     for (const auto &state : aut.acceptStates) {
        newAut.acceptStates.insert(state + 1 + statesAmount);
     }


     for (const auto &transition : transitionMap) {
        for (const auto &elem : transition.second) {
            newAut.addTransition(transition.first.first + 1, transition.first.second, elem + 1);
        }
     }


     for (const auto &transition : aut.transitionMap) {
        for (const auto &elem : transition.second) {
            newAut.addTransition(transition.first.first + 1 + statesAmount, transition.first.second, elem + 1 + statesAmount);
        }
     }
     return newAut;
}

nondetAutomaton nondetAutomaton::operator*(nondetAutomaton &aut) {
    nondetAutomaton newAut = nondetAutomaton();
    newAut.statesAmount = statesAmount + aut.statesAmount; 
    for (const auto & state : acceptStates) {
        newAut.addTransition(state, '\0', statesAmount + aut.startStateIndex);
    }

    newAut.transitionMap = transitionMap;

    for (const auto &transition : aut.transitionMap) {
        for (const auto & state : transition.second) {
           newAut.addTransition(transition.first.first + statesAmount, transition.first.second, state + statesAmount);
        }
    }
    bool acceptsEmpty = false;
    set<int> epsilonClosure = {aut.startStateIndex};
    doEpsilonTransitions(epsilonClosure);
    for (const auto &state : epsilonClosure) {
        if (aut.acceptStates.count(state) > 0) {acceptsEmpty = true; break;};
    }
    if (acceptsEmpty) newAut.acceptStates = acceptStates;
    for (const auto &state : aut.acceptStates) {
        newAut.makeAcceptState(state + statesAmount);
    }

    return newAut;

}



ostream & operator<<(ostream &os, nondetAutomaton &aut) {
    set<int> transitionStates;
    set<int>::iterator i;
    map<pair<int, char>, set<int>>::iterator j;
    os << aut.statesAmount << " states (0-" << aut.statesAmount - 1 << ")" << endl; 
    os << "Starting state: " << aut.startStateIndex << endl;
    os << "Accept states: {";
    for (i = aut.acceptStates.begin(); i != aut.acceptStates.end(); i++) {
       if (i != aut.acceptStates.begin()) os << ", ";
       os << *i;
    }
    os << "}" << endl;
    os << "Transitions:" << endl; 
    for (j = aut.transitionMap.begin(); j != aut.transitionMap.end(); j++) {
       os << "\t(" << j->first.first << ", '" << j->first.second << "') -> ";
       transitionStates = j->second;
       for (i = transitionStates.begin(); i != transitionStates.end(); i++) {
           if (i != transitionStates.begin()) os << ", ";
           os << *i;
       }
       os << endl;
    }
    return os;
}