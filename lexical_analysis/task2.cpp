#include <iostream>
#include <string>
using namespace std;

void lex(string s) {
    int i = -1;
    int state = 0;
    while (s[++i] != '\0') {
        switch (state)
        {
        case 0:
            switch (s[i])
            {
            case '+': case '-': case '*': cout << s[i] << endl; break;
            case '>': state = 3;cout << s[i];break;
            case '<': state = 4; cout << s[i];break;
            case '=': state = 5; cout << s[i];break;
            case '/': state = 6;break;
            case 'i': state = 10; cout << s[i];break;
            case 'e': state = 11; cout << s[i];break;
            case 'w': state = 14; cout << s[i];break;
            case 'd': state = 18; cout << s[i];break;
            case 'f': state = 19; cout << s[i]; break;
            case 'r': state = 21; cout << s[i]; break;
            default:
                if (isdigit(s[i])) {cout << s[i]; state = 2;}
                else if ((s[i] == '_') || 
           (s[i] >= 'a' && s[i] <= 'z') || 
            (s[i] >= 'A' && s[i] <= 'Z')) {cout << s[i]; state = 1;}
                    else cout << s[i];state = 26;
                break;
            }
            case 1: {
            switch (s[i])
            {
            case '+': case '-': case '*': cout << endl << s[i] << endl; state = 0; break;
            case '>': state = 3;  cout << endl << s[i];break;
            case '<': state = 4;   cout << endl << s[i];break;
            case '=': state = 5;   cout << endl << s[i];break;
            case '/': state = 6;   cout << endl;break;
            default : 
                if ((s[i] == '_') || (s[i] >= 'a' && s[i] <= 'z') || (s[i] >= 'A' && s[i] <= 'Z')
                 || isdigit(s[i])) cout << s[i];
                 else state = 26;
            break;
            }
            case 2: switch (s[i])
            {
            case '+': case '-': case '*': cout << endl << s[i] << endl; break;
            case '>': state = 3;cout << endl << s[i];break;
            case '<': state = 4; cout << endl << s[i];break;
            case '=': state = 5; cout << endl << s[i];break;
            case '/': state = 6; cout << endl;break;
            case 'i': state = 10; cout << endl << s[i];break;
            case 'e': state = 11; cout << endl << s[i];break;
            case 'w': state = 14; cout << endl << s[i];break;
            case 'd': state = 18; cout << endl << s[i];break;
            case 'f': state = 19; cout << endl << s[i]; break;
            case 'r': state = 21; cout << endl << s[i]; break;
            case '.': state = 27; cout << s[i]; break;
            default:
                if (isdigit(s[i])) {cout << s[i]; state = 2;}
                else if ((s[i] == '_') || 
           (s[i] >= 'a' && s[i] <= 'z') || 
            (s[i] >= 'A' && s[i] <= 'Z')) {cout <<  endl << s[i]; state = 1;}
                    else cout << s[i];state = 26;
                break;
            }
            case 3: case 4: case 5: switch (s[i])
            {
            case '=':state = 0; cout << s[i] << endl; break;
            default:state = 26; cout << s[i];break;
            }
            break;
            case 6: switch (s[i])
            {
            case '*':state = 8;break;
            case '+': case '-': cout << "/" << endl << s[i] << endl; break;
            case '>': state = 3;cout << "/" << endl << s[i];break;
            case '<': state = 4; cout << "/" << endl << s[i];break;
            case '=': state = 5; cout << "/" << endl << s[i];break;
            case '/': state = 6; cout << "/" << endl << s[i];break;
            case 'i': state = 10; cout << "/" << endl << s[i];break;
            case 'e': state = 11; cout << "/" << endl << s[i];break;
            case 'w': state = 14; cout << "/" << endl << s[i];break;
            case 'd': state = 18; cout << "/" << endl << s[i];break;
            case 'f': state = 19; cout << "/" << endl << s[i]; break;
            case 'r': state = 21; cout << "/" << endl << s[i]; break;
            default:
                if (isdigit(s[i])) {cout << "/" << endl <<  s[i]; state = 2;}
                else if ((s[i] == '_') || 
           (s[i] >= 'a' && s[i] <= 'z') || 
            (s[i] >= 'A' && s[i] <= 'Z')) {cout << "/" <<  endl << s[i]; state = 1;}
                    else cout << "/" << s[i];state = 26;
                break;
            
            }
        case 8: switch (s[i])
        {
        case '*': state = 9; break;
        default: state = 8; break;
        }
        case 9: switch (s[i])
        {
        case '/':
            /* code */
            break;
        
        default:
            break;
        }
        
        default:
            break;
        }
    }

}

int main() {

}