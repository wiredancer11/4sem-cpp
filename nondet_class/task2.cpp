#include "../nondetAutomaton.h"

using namespace std;

int main() {
    nondetAutomaton aut = nondetAutomaton();
    aut.addState();
    aut.addState();
    aut.addState();
    aut.addState();
    aut.addState();
    aut.addState();
    aut.addTransition(0, '0', 0);
    aut.addTransition(0, '1', 1);
    aut.addTransition(1, '0', 0);
    aut.addTransition(1, '1', 2);
    aut.addTransition(2, '0', 0);
    aut.addTransition(2, '1', 3);
    aut.addTransition(3, '0', 0);
    aut.addTransition(3, '1', 4);
    aut.addTransition(4, '0', 0);
    aut.addTransition(4, '1', 5);
    aut.addTransition(5, '0', 0);
    aut.addTransition(5, '1', 5);
    aut.makeAcceptState(5);
    cout << aut;
    string s;
    while (s != "a") {
        cin >> s;
        cout << aut(s) << endl;
    }
}