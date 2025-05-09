#include <iostream>
#include <string>
#include "..\finiteAutomaton.h"
#include "..\nondetAutomaton.h"

int main() {
   nondetAutomaton aut1, aut2, aut;
   aut1.addState();
   aut1.addState();
   aut1.setStartState(0);
   aut1.makeAcceptState(1);
   aut1.addTransition(0, '0', 1);
   aut1.addTransition(0, '1', 0);
   aut1.addTransition(1, '0', 1);
   aut1.addTransition(1, '1', 1);

   aut2.addState();
   aut2.addState();
   aut2.addState();
   aut2.setStartState(0);
   aut2.makeAcceptState(2);
   aut2.addTransition(0, '0', 0);
   aut2.addTransition(0, '1', 1);
   aut2.addTransition(0, '1', 0);
   aut2.addTransition(1, '1', 2);

   aut = *aut2;
   finiteAutomaton aut3 = aut1 % aut2;
   std::cout << aut;
   std::string s;
   std::cin >> s;
   while (s != "a") {
    std::cin >> s;
    std::cout << aut(s) << std::endl;
   }
}