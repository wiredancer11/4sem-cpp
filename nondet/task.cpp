
#include <iostream>
#include <string>
#include <set>
#include <map>

using namespace std;

bool f1(string s) {
    set<int> states;
    char i = -1;
    states.insert(0);
    while(s[++i] != '\0') {
        set<int> ns;
        set<int>::iterator j;
        for (j = states.begin(); j != states.end(); j++) {
            switch(*j) {
                case 0: switch(s[i]) {
                    case '0': ns.insert(0); ns.insert(1); break;
                    case '1': ns.insert(0);
                }
                break;
                case 1: switch(s[i]) {
                    case '0':break;
                    case '1': ns.insert(2);
                }
                break;
                case 2: switch(s[i]) {
                    case '0':break;
                    case '1': ns.insert(3); break;
                }
                break;
                case 3: switch(s[i]) {
                    case '0': 
                    case '1': ns.insert(3);
                }
                break;
            }
        }
        states = ns;
    }
    return states.count(3) == 1;
}


bool f2(string s) {
    set<int> states;
    char i = -1;
    states.insert(0);
    while(s[++i] != '\0') {
        set<int> ns;
        set<int>::iterator j;
        for (j = states.begin(); j != states.end(); j++) {
            switch(*j) {
                case 0:
                    switch(s[i]) {
                        case '0': ns.insert(0); break;
                        case '1': ns.insert(1); break;
                    }
                case 1:
                case 2:
                case 3:
                case 4:
                case 5:
                case 6:
                case 7:
                case 8:
                case 9:
                    switch(s[i]) {
                        case '0': ns.insert(*j + 1); break;
                        case '1': ns.insert(*j + 1); ns.insert(1); break;
                    }
                break;
                case 10:
                    switch(s[i]) {
                        case '0': break;
                        case '1': ns.insert(1); break;
                    }
                break;
            }
        }
        states = ns;
    }
    return states.count(10) == 1;
}

bool f3(string s) {
    set<int> states;
    states.insert(0);
    char i = -1;
    while (s[++i] != '\0') {
        set<int> ns;
        set<int>::iterator j;
        for (j = states.begin(); j != states.end(); j++) {
            switch(*j) {
               case 0: switch(s[i]) {
                case '0': ns.insert(1); break;
                case '1': ns.insert(0); break;
               }
               break;
               case 1: switch(s[i]) {
                    case '0': ns.insert(5); break;
                    case '1': ns.insert(2); break;
               }
               break;
               case 2:
               case 3: switch(s[i]) {
                    case '0': ns.insert(1); ns.insert(*j+1);break;
                    case '1': ns.insert(*j+1); break;
               }
               break;
               case 4: switch(s[i]) {
                    case '0': 
                    case '1': ns.insert(1); break;
               }
               break;
               case 5: ns.insert(5) ; break;
               break;
            }
        }
        states = ns;
    }
    return states.count(5) == 1;
}


bool f4(string s) {
    set<int> states;
    states.insert(0);
    char i = -1;
    while(s[++i] != '\0') {
        set<int>::iterator j;
        set<int> ns;
        for (j = states.begin(); j != states.end(); j++) {
            if (*j < 11) ns.insert(*j);
            switch(s[i]) {
                case '0': 
                switch(*j) {
                    case 1: ns.insert(11); ns.insert(1); break;
                    default: ns.insert(1); break;
                }
                break;
                case '1':
                switch(*j) {
                    case 2: ns.insert(12); ns.insert(2); break;
                    default: ns.insert(2); break;
                }
                break;
                case '2':
                switch(*j) {
                    case 3: ns.insert(13); ns.insert(3); break;
                    default: ns.insert(3); break;
                }
                break;
                case '3':
                switch(*j) {
                    case 4: ns.insert(14); ns.insert(4); break;
                    default: ns.insert(4); break;
                }
                break;
                case '4':
                switch(*j) {
                    case 5: ns.insert(15); ns.insert(5); break;
                    default: ns.insert(5); break;
                }
                break;
                case '5':
                switch(*j) {
                    case 6: ns.insert(16); ns.insert(6); break;
                    default: ns.insert(6); break;
                }
                break;
                case '6':
                switch(*j) {
                    case 7: ns.insert(17); ns.insert(7); break;
                    default: ns.insert(7); break;
                }
                break;
                case '7':
                switch(*j) {
                    case 8: ns.insert(18); ns.insert(8); break;
                    default: ns.insert(8); break;
                }
                break;
                case '8':
                switch(*j) {
                    case 9: ns.insert(19); ns.insert(9); break;
                    default: ns.insert(9); break;
                }
                break; 
                case '9':
                switch(*j) {
                    case 10: ns.insert(20); ns.insert(10); break;
                    default: ns.insert(10); break;
                }
                break; 
            }
        }
        states = ns;
    }
    int count = 0;
    for (int i = 11; i<21; i++) {
        count += states.count(i);
    }
    return count == 0;
}

bool f5(string s) {
    set<int> states;
    states.insert(0);
    char i = -1;
    while(s[++i] != '\0') {
        set<int>::iterator j;
        set<int> ns;
        for (j = states.begin(); j != states.end(); j++) {
            if (*j < 11) ns.insert(*j);
            switch(s[i]) {
                case '0': 
                switch(*j) {
                    case 1: ns.insert(11); ns.insert(1); break;
                    default: ns.insert(1); break;
                }
                break;
                case '1':
                switch(*j) {
                    case 2: ns.insert(12); ns.insert(2); break;
                    default: ns.insert(2); break;
                }
                break;
                case '2':
                switch(*j) {
                    case 3: ns.insert(13); ns.insert(3); break;
                    default: ns.insert(3); break;
                }
                break;
                case '3':
                switch(*j) {
                    case 4: ns.insert(14); ns.insert(4); break;
                    default: ns.insert(4); break;
                }
                break;
                case '4':
                switch(*j) {
                    case 5: ns.insert(15); ns.insert(5); break;
                    default: ns.insert(5); break;
                }
                break;
                case '5':
                switch(*j) {
                    case 6: ns.insert(16); ns.insert(6); break;
                    default: ns.insert(6); break;
                }
                break;
                case '6':
                switch(*j) {
                    case 7: ns.insert(17); ns.insert(7); break;
                    default: ns.insert(7); break;
                }
                break;
                case '7':
                switch(*j) {
                    case 8: ns.insert(18); ns.insert(8); break;
                    default: ns.insert(8); break;
                }
                break;
                case '8':
                switch(*j) {
                    case 9: ns.insert(19); ns.insert(9); break;
                    default: ns.insert(9); break;
                }
                break; 
                case '9':
                switch(*j) {
                    case 10: ns.insert(20); ns.insert(10); break;
                    default: ns.insert(10); break;
                }
                break; 
            }
        }
        states = ns;
    }
    int count = 0;
    for (int i = 11; i<21; i++) {
        count += states.count(i);
    }
    return count > 0;
}


int main() {
    string s;
    while (s != "a") {
        cin >> s;
        cout << f5(s) << endl;
    }
}