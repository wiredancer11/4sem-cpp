#include <iostream>
#include <string>
#include <set>
#include <map>

using namespace std;

bool f(string s) {
    set<int> states;
    char i = -1;
    states.insert(0);
    while(s[++i] != '\0') {
        set<int> ns;
        set<int>::iterator j;
        for (j = states.begin(); j != states.end(); j++) {
            switch(*j) {
                case 0: switch(s[i]) {
                    case '0': ns.insert(0); break;
                    case '1': ns.insert(0);
                }
                break;
                case 1: switch(s[i]) {
                    case '0': ns.insert(0); ns.insert(1); break;
                    case '1': ns.insert(0);
                }
                break;
                case 2:
            }
            states = ns;
        }
        return states.count(2) == 1;
    }
}