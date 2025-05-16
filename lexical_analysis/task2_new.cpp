#include <iostream>
#include <string>

using namespace std;

void lex(string s) {
    int i = -1;
    int state = 0;
    while (s[++i] != '\0') {
        switch (state) {
            case 0: switch (s[i])
            {
            case '+': case '-': case '%': case '*':
                cout << s[i] << endl;
                break;
            case '>': case '<': case '=':
                state = 3;
                cout << s[i];
                break;
            case '/': state = 4; break;
            case ' ': state = 0; break;
            default:
                if (isdigit(s[i])) {state = 2; cout << s[i];}
                else if (isalpha(s[i]) || s[i] == '_') {state = 1; cout << s[i];}
                else {state = 8; cout << s[i];}
                break;
            }
            break;
            case 1: switch (s[i])
            {
            case '+': case '-': case '%': case '*':
                cout << endl << s[i] << endl;
                break;
            case '>': case '<': case '=':
                state = 3;
                cout << endl << s[i];
                break;
            case '/': state = 4; cout << endl; break;
            case ' ': state = 0; cout << endl;break;
            default:
                if (isalpha(s[i]) || s[i] == '_' || isdigit(s[i])) {state = 1; cout << s[i];}
                else {state = 8; cout << s[i];}
                break;
            }
            break;

            case 2: switch (s[i])
            {
            case '+': case '-': case '%': case '*':
                cout << endl << s[i] << endl;
                break;
            case '>': case '<': case '=':
                state = 3;
                cout << endl << s[i];
                break;
            case '/': state = 4; cout << endl; break;
            case ' ': state = 0; cout << endl;break;
            case '.': state = 7; cout << s[i]; break;
            default:
                if (isalpha(s[i]) || s[i] == '_') {state = 1; cout << endl << s[i];}
                else if (isdigit(s[i])) {state = 2; cout << s[i];}
                else {state = 8; cout << s[i];}
                break;
            }
            break;

            case 3: switch (s[i])
            {
            case '=': state = 0; cout<< s[i] << endl; break;
            case '+': case '-': case '%': case '*':
                cout << endl << s[i] << endl;
                break;
            case '>': case '<': 
                state = 3;
                cout << endl << s[i];
                break;
            case '/': state = 4; cout << endl; break;
            case ' ': state = 0; cout << endl;break;
            default:
                if (isalpha(s[i]) || s[i] == '_') {state = 1; cout << endl << s[i];}
                else if (isdigit(s[i])) {state = 2; cout << endl << s[i];}
                else {state = 8; cout << s[i];}
                break;
            }
            break;

            case 4: switch (s[i])
            {
            case '*': state = 5;break;
            case '+': case '-': case '%':
                cout << "/" << endl << s[i] << endl;
                break;
            case '>': case '<': 
                state = 3;
                cout << "/" << endl << s[i];
                break;
            case '/': state = 4; cout << "/" << endl; break;
            case ' ': state = 0; cout << "/" << endl;break;
            
            default:
                if (isalpha(s[i]) || s[i] == '_') {state = 1; cout << "/" << endl << s[i];}
                else if (isdigit(s[i])) {state = 2; cout << "/" << endl << s[i];}
                else {state = 8; cout << "/" <<s[i];}
                break;
            }
            break;

            case 5: switch (s[i])
            {
            case '*': state = 6; break;
            default:
                state = 5;
                break;
            }
            break;

            case 6: switch (s[i])
            {
            case '*': state = 6;break;
            case '/': state = 0; break;
            default:
                state = 5;
                break;
            }
            break;

            case 7: if (isdigit(s[i])) {state = 2; cout << s[i];}
            else cout << s[i]; state = 8;
            break;
            case 8:
                state = 8;
            break;
        }
    }
    if (state == 8) cout << "\nERROR";
}

int main() {
    string s;
    getline(cin, s);
    cout << endl;
    lex(s);
}