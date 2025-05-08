#include "finiteAutomaton.h"
using namespace std;

int main() {
    finiteAutomaton aut = finiteAutomaton();
    aut.addState();
    aut.addState();
    aut.addState();
    aut.addState();
    aut.addTransition(0, '0', 1);
    aut.addTransition(0, '1', 0);
    aut.addTransition(1, '0', 2);
    aut.addTransition(1, '1', 0);
    aut.addTransition(2, '0', 2);
    aut.addTransition(2, '1', 2);
    aut.addTransition(3, '0', 1);
    aut.addTransition(3, '1', 0);
    aut.makeAcceptState(0);
    aut.makeAcceptState(3);
    finiteAutomaton aut1 = finiteAutomaton();
    aut1.addState();
    aut.optimize();
    cout << (aut ==  aut1);
}