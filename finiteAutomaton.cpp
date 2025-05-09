#include "finiteAutomaton.h"
#include <vector>
using namespace std;

int pairToNumber(int i, int j, int size2) {
    return j + i * size2;
}

finiteAutomaton::finiteAutomaton() {
    statesAmount = 0;
    startStateIndex = 0;
}

finiteAutomaton::finiteAutomaton(int n) {
    statesAmount = n;
    startStateIndex = 0;
}

finiteAutomaton::finiteAutomaton(const finiteAutomaton& aut){
    statesAmount = aut.statesAmount;
    startStateIndex = aut.startStateIndex;
    acceptStates = aut.acceptStates;
    transitionMap = aut.transitionMap;
};

void finiteAutomaton::addTransition(int state1, char c, int state2) {
    if (transitionMap.find({state1, c}) == transitionMap.end()) {
        transitionMap.insert({{state1, c}, state2});
    }
};

void finiteAutomaton::changeTransition(int state1, char c, int state2) {
    if (transitionMap.find({state1, c}) != transitionMap.end()) {
        transitionMap.insert({{state1, c}, state2});
    }
}

void finiteAutomaton::delTransition(int state1, char c, int state2) {
    if (transitionMap.find({state1, c}) != transitionMap.end()) {
        transitionMap.erase({state1, c});
    }
};

void finiteAutomaton::addState() {
    statesAmount++;
};

void finiteAutomaton::setStartState(int state) {
    if (state < statesAmount) startStateIndex = state;
}

void finiteAutomaton::makeAcceptState(int state) {
    if (state < statesAmount) acceptStates.insert(state);
}

void finiteAutomaton::removeAcceptState(int state) {
    if (acceptStates.count(state) > 0) acceptStates.erase(state);
}

void finiteAutomaton::renumberStates(map<int, int> renum) {
    if (renum.size() == statesAmount) {
        startStateIndex = renum.at(startStateIndex);
        set<int>::iterator j; 
        set<int> newAcceptStates;
        for (j = acceptStates.begin(); j != acceptStates.end(); j++) {
            newAcceptStates.insert(renum.at(*j));
        }
        acceptStates = newAcceptStates;

        map<pair<int, char>, int>::iterator i;
        map<pair<int, char>, int> newTransitionMap;
        for (i = transitionMap.begin(); i != transitionMap.end(); i++) {
            newTransitionMap.insert({{renum.at(i->first.first), i->first.second}, renum.at(i->second)});
        }
        transitionMap = newTransitionMap;
    }
}

bool finiteAutomaton::isEmpty(int state) {
    if (state == startStateIndex) return false;
    if (acceptStates.count(state) > 0) return false;
    map<pair<int, char>, int>::iterator i;
    for (i = transitionMap.begin(); i != transitionMap.end(); i++) {
        if (i->first.first == state || i->second == state) return false;
    }
    return true;
}

void finiteAutomaton::delState(int state) {
    if (state < statesAmount) {
        if (acceptStates.count(state) > 0) acceptStates.erase(state);
        map<pair<int, char>, int>::iterator i;
        map<pair<int, char>, int> newTransitionMap;
        for (i = transitionMap.begin(); i != transitionMap.end(); i++) {
            if (i->first.first != state && i->second != state) newTransitionMap.insert(*i);
        }
        transitionMap = newTransitionMap;

        if (state == statesAmount - 1) {
            statesAmount--;
            if (isEmpty(state - 1)) delState(state - 1);
        }
    }
};

bool finiteAutomaton::operator()(string s) {
    int i = -1;
    int state = startStateIndex;
    while(s[++i] != '\0') {
        state = transitionMap.at({state, s[i]});
    }
    return acceptStates.count(state);
};

void finiteAutomaton::operator=(const finiteAutomaton& aut) {
    statesAmount = aut.statesAmount;
    startStateIndex = aut.startStateIndex;
    acceptStates = aut.acceptStates;
    transitionMap = aut.transitionMap;
};

void finiteAutomaton::del() {
    set<int> reachableStates;
    map<int, int> renum;
    map<pair<int, char>,int>::iterator i;
    int mapIndex = 0;
    reachableStates.insert(startStateIndex);
    renum.insert({startStateIndex, mapIndex++});
    bool isFilled = false;
    while(!isFilled) {
        isFilled = true;
        for (i = transitionMap.begin(); i != transitionMap.end(); i++) {
            if (reachableStates.count(i->first.first) > 0 && reachableStates.count(i->second) == 0) {
               isFilled = false; 
               reachableStates.insert(i->second);
               renum.insert({i->second, mapIndex++});
            }
        }
    }
    for (int j = 0; j < statesAmount; j++) if (reachableStates.count(j) == 0)  renum.insert({j, mapIndex+1});
    this->renumberStates(renum);
    this->delState(mapIndex+1);
};

map<int,int> finiteAutomaton::optimize() {
    set<pair<int, int>> uneqStatesTable;
    set<pair<int, int>>::iterator uneqIter;
    map<int, int> optimizationMap;
    int optimizationMapIndex = 0;
    set<int>::iterator i;
    map<pair<int, char>, int>::iterator l;
    pair<int, int> states;
    bool isInserted;
    int j, k;

    for (i = acceptStates.begin(); i != acceptStates.end(); i++) {
        for (j = 0; j < statesAmount; j++) {
            if (acceptStates.find(j) == acceptStates.end()) uneqStatesTable.insert({max(*i, j), min(*i, j)});
        }
    }

    isInserted = true;

    while (isInserted) {
        isInserted = false;
        for (j = 0; j < statesAmount; j++) {
            for (k = 0; k < j; k++) {
                for (l = transitionMap.begin(); l != transitionMap.end(); l++) {
                    if (l->first.first == j && transitionMap.count({k, l->first.second}) > 0 && uneqStatesTable.count({j, k}) == 0) {
                        states.first = max(l->second, transitionMap.at({k, l->first.second}));
                        states.second = min(l->second, transitionMap.at({k, l->first.second}));
                        if (uneqStatesTable.count(states) > 0) {uneqStatesTable.insert({j, k}); isInserted = true;}
                    }
                }
            }
        }
    }
    set<int> mappedStates;
    for (j = 0; j < statesAmount; j++) {
        if (mappedStates.count(j) == 0) {
            optimizationMap.insert({j, optimizationMapIndex});
            mappedStates.insert(j);
            for (k = j+1; k < statesAmount; k++) {
                if(uneqStatesTable.count({k, j}) == 0) {optimizationMap.insert({k, optimizationMapIndex});mappedStates.insert(k);}
            }
            optimizationMapIndex++;
        }
    }
    this->renumberStates(optimizationMap);
    statesAmount = optimizationMapIndex;
    return optimizationMap;
}

bool finiteAutomaton::operator==(const finiteAutomaton& aut2) {
    finiteAutomaton unionAutomaton = finiteAutomaton(*this);  
    unionAutomaton.statesAmount += aut2.statesAmount;
    for (auto i = aut2.acceptStates.begin(); i != aut2.acceptStates.end(); i++) {
        unionAutomaton.makeAcceptState(statesAmount + *i);
    }
    for (auto j = aut2.transitionMap.begin(); j != aut2.transitionMap.end(); j++) {
        unionAutomaton.addTransition(j->first.first + statesAmount, j->first.second, j->second + statesAmount);
    }
    map<int, int> optimizationMap = unionAutomaton.optimize();
    return optimizationMap.at(startStateIndex) == optimizationMap.at(aut2.startStateIndex + statesAmount);
}

finiteAutomaton finiteAutomaton::operator%(const finiteAutomaton &aut) {
    vector<pair<int, int>> statePairs;
    finiteAutomaton newAut;
    newAut.statesAmount = statesAmount * aut.statesAmount;
    for (int i = 0; i < statesAmount; i++) {
        for (int j = 0; j < aut.statesAmount; j++) {
            if (i == startStateIndex &&  j == aut.startStateIndex) 
                newAut.setStartState(pairToNumber(i, j, aut.statesAmount));
            if (acceptStates.count(i) > 0 && aut.acceptStates.count(j) > 0) 
                newAut.makeAcceptState(pairToNumber(i, j, aut.statesAmount));
            for (const auto & transition: transitionMap) {
                if (transition.first.first == i && aut.transitionMap.count({j, transition.first.second}) > 0) {
                    newAut.addTransition(pairToNumber(i, j, aut.statesAmount), transition.first.second,
                     pairToNumber(transition.second, aut.transitionMap.at({j, transition.first.second}),
                      aut.statesAmount));
                }
            }

        }
    }
    return newAut;
}

ostream & operator<<(ostream &os,  finiteAutomaton &aut) {
    set<int>::iterator i;
    map<pair<int, char>, int>::iterator j;
    os << aut.statesAmount << " states (0-" << aut.statesAmount - 1 << ")" << endl; 
    os << "Starting state: " << aut.startStateIndex << endl;
    os << "Accept states: {";
    for (i = aut.acceptStates.begin(); i != aut.acceptStates.end(); i++) {
        os << *i << ", ";
    }
    os << '\b' << '\b' << "}" << endl;
    os << "Transitions:" << endl; 
    for (j = aut.transitionMap.begin(); j != aut.transitionMap.end(); j++) {
        os << "\t(" << j->first.first << ", '" << j->first.second << "') -> " << j->second << endl;
    }
    return os;
}