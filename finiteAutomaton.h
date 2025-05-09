#ifndef FINITE_AUTOMATON_H
#define FINITE_AUTOMATON_H

#include <iostream>
#include <set>
#include <map>
#include <utility> 
#include <string>

class finiteAutomaton {
private: 
    int statesAmount;
    int startStateIndex;
    std::set<int> acceptStates;
    std::map<std::pair<int, char>, int> transitionMap;

public:
    finiteAutomaton();
    finiteAutomaton(int n);
    finiteAutomaton(const finiteAutomaton& aut);

    void addTransition(int state1, char c, int state2);
    void changeTransition(int state1, char c, int state2);
    void delTransition(int state1, char c, int state2);

    void addState();
    void setStartState(int state);
    void makeAcceptState(int state);
    void removeAcceptState(int state);
    void delState(int state);
    bool isEmpty(int state);

    void renumberStates(std::map<int, int> renum);
    void del();
    std::map<int, int> optimize();

    bool operator()(std::string s);
    void operator=(const finiteAutomaton& aut);
    bool operator==(const finiteAutomaton& aut2);
    finiteAutomaton operator%(const finiteAutomaton& aut);

    friend std::ostream& operator<<(std::ostream& os, finiteAutomaton& aut);
};

#endif 