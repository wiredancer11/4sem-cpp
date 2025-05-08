#include <iostream>
#include "../nondetAutomaton.h"
#include "../finiteAutomaton.h"
using namespace std;


int main() {
    nondetAutomaton ndAut = nondetAutomaton();
    finiteAutomaton derivedAut;
    ndAut.addState();
    ndAut.addState();
    ndAut.addState();
    ndAut.addTransition(0, 'a', 0);
    ndAut.addTransition(0, '\0', 1);
    ndAut.addTransition(1, 'b', 1);
    ndAut.addTransition(1, 'b', 2);
    ndAut.addTransition(2, 'a', 2);
    ndAut.setStartState(0);
    ndAut.makeAcceptState(2);
    cout << ndAut;
    derivedAut = !ndAut;
    cout << derivedAut;
}
