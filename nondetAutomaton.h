#ifndef NONDET_AUTOMATON_H
#define NONDET_AUTOMATON_H

#include <iostream>
#include <set>
#include <map>
#include <utility>
#include "finiteAutomaton.h"
#include <string>

class nondetAutomaton {
private:
    int statesAmount;
    int startStateIndex;
    std::set<int> acceptStates;
    std::map<std::pair<int, char>, std::set<int>> transitionMap;

public:
    nondetAutomaton();
    nondetAutomaton(const nondetAutomaton &aut);

    void addState();
    void setStartState(int n);
    void makeAcceptState(int state);
    void removeAcceptState(int state);

    void addTransition(int state1, char c, int state2);
    void changeTransition(int state1, char c, std::set<int> states);
    void delTransition(int state1, char c, int state2);

    void doEpsilonTransitions(std::set<int> &activeStates);

    void renumberStates(std::map<int, int> renumMap);

    bool operator()(std::string s);
    void operator=(nondetAutomaton &aut);
    nondetAutomaton operator+(nondetAutomaton &aut);
    nondetAutomaton operator*(nondetAutomaton &aut);
    nondetAutomaton operator*();
    finiteAutomaton operator!();
    finiteAutomaton operator%(nondetAutomaton &aut);


    friend std::ostream& operator<<(std::ostream& os, nondetAutomaton& aut);
};

#endif