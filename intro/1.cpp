#include <iostream>
#include <string>

using namespace std;

bool f1(string s) {
    int state = 0;
    char i = -1;
    while(s[++i] != '\0') {
        switch(state) {
            case 0: 
            case 1: 
            case 2:
                switch(s[i]) {
                    case '0':
                        state = state + 1;
                        break;
                    case '1':
                        state = 0;
                        break;
                }
            break;
            case 3: 
            break;
        }
    }
    return state == 3;
}

bool f2(string s) {
    int state = 0;
    char i = -1;
    while(s[++i] != '\0') {
        switch(state) {
            case 0: 
                switch(s[i]) {
                    case '0':
                        state = 1;
                        break;
                    case '1':
                        state = 0;
                        break;
                }
            case 1: 
            case 2:
                switch(s[i]) {
                    case '0':
                        state = 1;
                        break;
                    case '1':
                        state = state + 1;
                        break;
                }
            case 3:break;
        }
    }
    return state == 3;

}

bool f3(string s) {
    int state = 0;
    char i = -1;
    while(s[++i] != '\0') {
        switch(state) {
            case 0: 
            case 1: 
            case 2:
                switch(s[i]) {
                    case '0':
                        state = min(2, state+1);
                        break;
                    case '1':
                        state = 0;
                        break;
                }
        }
    }
    return state == 2;

}

bool f5(string s) {
    int state = 0;
    char i = -1;
    while(s[++i] != '\0') {
        switch(state) {
            case 0: 
                switch(s[i]) {
                    case '0':
                        state = 1;
                        break;
                    case '1':
                        state = 3;
                        break;
                }
            break;
            case 1: 
                switch(s[i]) {
                    case '0':
                        state = 4;
                        break;
                    case '1':
                        state = 2;
                        break;
                }
            break;
            case 2:
                break;
            case 3:
                switch(s[i]) {
                    case '0':
                        state = 4;
                        break;
                    case '1':
                        break;
                }
                break;
            case 4:
                switch(s[i]) {
                    case '0':
                        state = 4;
                        break;
                    case '1':
                        state = 5;
                        break;
                }
                break;
            case 5:
                switch(s[i]) {
                    case '0':
                        state = 4;
                        break;
                    case '1':
                        state = 3;
                        break;
                }
            break;
    }
}
    return state == 2 || state == 5;
}


bool f6(string s) {
    int state = 0;
    char i = -1;
    while(s[++i] != '\0') {
        switch(state) {
            case 0:
            switch(s[i]) {  
            case '0':
                    state = 1;
                    break;    
            case '1':
                    state = 5;
                    break;    
            }
            break;
            case 1:
            switch(s[i]) {
            case '0':
                    state = 2;
                    break;
            case '1':
                    state = 6;
                    break;
            }
            break;
            case 2:
            switch(s[i]) {
            case '0':
                    state = 3;
                    break;
            case '1':
                    state = 7;
                    break;
            }
            break;
            case 3:
            switch(s[i]) {
            case '0':
                    state = 4;
                    break;
            case '1':
                    state = 8;
                    break;
            }
            break;
            case 4:
            switch(s[i]) {
            case '0':
                    state = 0;
                    break;
            case '1':
                    state = 9;
                    break;
            }
            break;
            case 5:
            switch(s[i]) {
            case '0':
                    state = 6;
                    break;
            case '1':
                    state = 10;
                    break;
            }
            break;
            case 6:
            switch(s[i]) {
            case '0':
                    state = 7;
                    break;
            case '1':
                    state = 11;
                    break;
            }
            break;
            case 7:
            switch(s[i]) {
            case '0':
                    state = 8;
                    break;
            case '1':
                    state = 12;
                    break;
            }
            break;
            case 8:
            switch(s[i]) {
            case '0':
                    state = 9;
                    break;
            case '1':
                    state = 13;
                    break;
            }
            break;
            case 9:
            switch(s[i]) {
            case '0':
                    state = 5;
                    break;
            case '1':
                    state = 14;
                    break;
            }
            break;
            case 10:
            switch(s[i]) {
            case '0':
                    state = 11;
                    break;
            case '1':
                    state = 0;
                    break;
            }
            break;
            case 11:
            switch(s[i]) {
            case '0':
                    state = 12;
                    break;
            case '1':
                    state = 1;
                    break;
            }
            break;
            case 12:
            switch(s[i]) {
            case '0':
                    state = 13;
                    break;
            case '1':
                    state = 2;
                    break;
            }
            break;
            case 13:
            switch(s[i]) {
            case '0':
                    state = 14;
                    break;
            case '1':
                    state = 3;
                    break;
            }
            break;
            case 14:
            switch(s[i]) {
            case '0':
                    state = 10;
                    break;
            case '1':
                    state = 4;
                    break;
            }
            break;
            }
}
    return state == 0;
}

bool f8(string s) {
    int state = 0;
    char i = -1;
    while(s[++i] != '\0') {
        switch (state) {
            case 0:
                switch (s[i]) {
                    case '0':
                        state = 0;
                        break;
                    case '1':
                        state = 1;
                        break;
                }
            break;
            case 1:
                switch (s[i]) {
                    case '0':
                        state = 2;
                        break;
                    case '1':
                        state = 3;
                        break;
                }
            break;
            case 2:
                switch (s[i]) {
                    case '0':
                        state = 4;
                        break;
                    case '1':
                        state = 0;
                        break;
                }
            break;
            case 3:
                switch (s[i]) {
                    case '0':
                        state = 1;
                        break;
                    case '1':
                        state = 2;
                        break;
                }
            break;
            case 4:
                switch (s[i]) {
                    case '0':
                        state = 3;
                        break;
                    case '1':
                        state = 4;
                        break;
                }
            break;
        }
    }
    return state == 0;
}

bool f8_rev(string s) {
    int state = 0;
    char i = -1;
    while (s[++i] != '\0') {
        switch (state) {
case 0:
switch(s[i]) {
case '0':
        state = 5;
        break;
case '1':
        state = 6;
        break;
}
break;
case 1:
switch(s[i]) {
case '0':
        state = 6;
        break;
case '1':
        state = 7;
        break;
}
break;
case 2:
switch(s[i]) {
case '0':
        state = 7;
        break;
case '1':
        state = 8;
        break;
}
break;
case 3:
switch(s[i]) {
case '0':
        state = 8;
        break;
case '1':
        state = 9;
        break;
}
break;
case 4:
switch(s[i]) {
case '0':
        state = 9;
        break;
case '1':
        state = 5;
        break;
}
break;
case 5:
switch(s[i]) {
case '0':
        state = 10;
        break;
case '1':
        state = 12;
        break;
}
break;
case 6:
switch(s[i]) {
case '0':
        state = 11;
        break;
case '1':
        state = 13;
        break;
}
break;
case 7:
switch(s[i]) {
case '0':
        state = 12;
        break;
case '1':
        state = 14;
        break;
}
break;
case 8:
switch(s[i]) {
case '0':
        state = 13;
        break;
case '1':
        state = 10;
        break;
}
break;
case 9:
switch(s[i]) {
case '0':
        state = 14;
        break;
case '1':
        state = 11;
        break;
}
break;
case 10:
switch(s[i]) {
case '0':
        state = 15;
        break;
case '1':
        state = 19;
        break;
}
break;
case 11:
switch(s[i]) {
case '0':
        state = 16;
        break;
case '1':
        state = 15;
        break;
}
break;
case 12:
switch(s[i]) {
case '0':
        state = 17;
        break;
case '1':
        state = 16;
        break;
}
break;
case 13:
switch(s[i]) {
case '0':
        state = 18;
        break;
case '1':
        state = 17;
        break;
}
break;
case 14:
switch(s[i]) {
case '0':
        state = 19;
        break;
case '1':
        state = 18;
        break;
}
break;
case 15:
switch(s[i]) {
case '0':
        state = 0;
        break;
case '1':
        state = 3;
        break;
}
break;
case 16:
switch(s[i]) {
case '0':
        state = 1;
        break;
case '1':
        state = 4;
        break;
}
break;
case 17:
switch(s[i]) {
case '0':
        state = 2;
        break;
case '1':
        state = 0;
        break;
}
break;
case 18:
switch(s[i]) {
case '0':
        state = 3;
        break;
case '1':
        state = 1;
        break;
}
break;
case 19:
switch(s[i]) {
case '0':
        state = 4;
        break;
case '1':
        state = 2;
        break;
}
break;
        }
    }
}

bool f7(string s) {
        int state = 0; 
        char i = -1;
        while (s[++i] != '\0') { 
                switch (state) {
                        case 0:
switch(s[i]) {
case '0':
        state = 1;
        break;
case '1':
        state = 2;
        break;
}
break;
case 1:
switch(s[i]) {
case '0':
        state = 3;
        break;
case '1':
        state = 4;
        break;
}
break;
case 2:
switch(s[i]) {
case '0':
        state = 5;
        break;
case '1':
        state = 6;
        break;
}
break;
case 3:
switch(s[i]) {
case '0':
        state = 7;
        break;
case '1':
        state = 8;
        break;
}
break;
case 4:
switch(s[i]) {
case '0':
        state = 9;
        break;
case '1':
        state = 10;
        break;
}
break;
case 5:
switch(s[i]) {
case '0':
        state = 11;
        break;
case '1':
        state = 12;
        break;
}
break;
case 6:
switch(s[i]) {
case '0':
        state = 13;
        break;
case '1':
        state = 14;
        break;
}
break;
case 7:
switch(s[i]) {
case '0':
        state = 15;
        break;
case '1':
        state = 16;
        break;
}
break;
case 8:
switch(s[i]) {
case '0':
        state = 17;
        break;
case '1':
        state = 18;
        break;
}
break;
case 9:
switch(s[i]) {
case '0':
        state = 19;
        break;
case '1':
        state = 20;
        break;
}
break;
case 10:
switch(s[i]) {
case '0':
        state = 21;
        break;
case '1':
        state = 22;
        break;
}
break;
case 11:
switch(s[i]) {
case '0':
        state = 23;
        break;
case '1':
        state = 24;
        break;
}
break;
case 12:
switch(s[i]) {
case '0':
        state = 25;
        break;
case '1':
        state = 26;
        break;
}
break;
case 13:
switch(s[i]) {
case '0':
        state = 27;
        break;
case '1':
        state = 28;
        break;
}
break;
case 14:
switch(s[i]) {
case '0':
        state = 29;
        break;
case '1':
        state = 30;
        break;
}
break;
case 15:
switch(s[i]) {
case '0':
        state = 31;
        break;
case '1':
        state = 32;
        break;
}
break;
case 16:
switch(s[i]) {
case '0':
        state = 33;
        break;
case '1':
        state = 34;
        break;
}
break;
case 17:
switch(s[i]) {
case '0':
        state = 35;
        break;
case '1':
        state = 36;
        break;
}
break;
case 18:
switch(s[i]) {
case '0':
        state = 37;
        break;
case '1':
        state = 38;
        break;
}
break;
case 19:
switch(s[i]) {
case '0':
        state = 39;
        break;
case '1':
        state = 40;
        break;
}
break;
case 20:
switch(s[i]) {
case '0':
        state = 41;
        break;
case '1':
        state = 42;
        break;
}
break;
case 21:
switch(s[i]) {
case '0':
        state = 43;
        break;
case '1':
        state = 44;
        break;
}
break;
case 22:
switch(s[i]) {
case '0':
        state = 45;
        break;
case '1':
        state = 46;
        break;
}
break;
case 23:
switch(s[i]) {
case '0':
        state = 47;
        break;
case '1':
        state = 48;
        break;
}
break;
case 24:
switch(s[i]) {
case '0':
        state = 49;
        break;
case '1':
        state = 50;
        break;
}
break;
case 25:
switch(s[i]) {
case '0':
        state = 51;
        break;
case '1':
        state = 52;
        break;
}
break;
case 26:
switch(s[i]) {
case '0':
        state = 53;
        break;
case '1':
        state = 54;
        break;
}
break;
case 27:
switch(s[i]) {
case '0':
        state = 55;
        break;
case '1':
        state = 56;
        break;
}
break;
case 28:
switch(s[i]) {
case '0':
        state = 57;
        break;
case '1':
        state = 58;
        break;
}
break;
case 29:
switch(s[i]) {
case '0':
        state = 59;
        break;
case '1':
        state = 60;
        break;
}
break;
case 30:
switch(s[i]) {
case '0':
        state = 61;
        break;
case '1':
        state = 62;
        break;
}
break;
case 31:
switch(s[i]) {
case '0':
        state = 31;
        break;
case '1':
        state = 32;
        break;
}
break;
case 32:
switch(s[i]) {
case '0':
        state = 32;
        break;
case '1':
        state = 34;
        break;
}
break;
case 33:
switch(s[i]) {
case '0':
        state = 33;
        break;
case '1':
        state = 36;
        break;
}
break;
case 34:
switch(s[i]) {
case '0':
        state = 34;
        break;
case '1':
        state = 38;
        break;
}
break;
case 35:
switch(s[i]) {
case '0':
        state = 35;
        break;
case '1':
        state = 40;
        break;
}
break;
case 36:
switch(s[i]) {
case '0':
        state = 36;
        break;
case '1':
        state = 42;
        break;
}
break;
case 37:
switch(s[i]) {
case '0':
        state = 37;
        break;
case '1':
        state = 44;
        break;
}
break;
case 38:
switch(s[i]) {
case '0':
        state = 38;
        break;
case '1':
        state = 46;
        break;
}
break;
case 39:
switch(s[i]) {
case '0':
        state = 39;
        break;
case '1':
        state = 48;
        break;
}
break;
case 40:
switch(s[i]) {
case '0':
        state = 40;
        break;
case '1':
        state = 50;
        break;
}
break;
case 41:
switch(s[i]) {
case '0':
        state = 41;
        break;
case '1':
        state = 52;
        break;
}
break;
case 42:
switch(s[i]) {
case '0':
        state = 42;
        break;
case '1':
        state = 54;
        break;
}
break;
case 43:
switch(s[i]) {
case '0':
        state = 43;
        break;
case '1':
        state = 56;
        break;
}
break;
case 44:
switch(s[i]) {
case '0':
        state = 44;
        break;
case '1':
        state = 58;
        break;
}
break;
case 45:
switch(s[i]) {
case '0':
        state = 45;
        break;
case '1':
        state = 60;
        break;
}
break;
case 46:
switch(s[i]) {
case '0':
        state = 46;
        break;
case '1':
        state = 46;
        break;
}
break;
case 47:
switch(s[i]) {
case '0':
        state = 15;
        break;
case '1':
        state = 32;
        break;
}
break;
case 48:
switch(s[i]) {
case '0':
        state = 16;
        break;
case '1':
        state = 34;
        break;
}
break;
case 49:
switch(s[i]) {
case '0':
        state = 17;
        break;
case '1':
        state = 36;
        break;
}
break;
case 50:
switch(s[i]) {
case '0':
        state = 18;
        break;
case '1':
        state = 38;
        break;
}
break;
case 51:
switch(s[i]) {
case '0':
        state = 19;
        break;
case '1':
        state = 40;
        break;
}
break;
case 52:
switch(s[i]) {
case '0':
        state = 20;
        break;
case '1':
        state = 42;
        break;
}
break;
case 53:
switch(s[i]) {
case '0':
        state = 21;
        break;
case '1':
        state = 44;
        break;
}
break;
case 54:
switch(s[i]) {
case '0':
        state = 54;
        break;
case '1':
        state = 54;
        break;
}
break;
case 55:
switch(s[i]) {
case '0':
        state = 23;
        break;
case '1':
        state = 48;
        break;
}
break;
case 56:
switch(s[i]) {
case '0':
        state = 24;
        break;
case '1':
        state = 50;
        break;
}
break;
case 57:
switch(s[i]) {
case '0':
        state = 25;
        break;
case '1':
        state = 52;
        break;
}
break;
case 58:
switch(s[i]) {
case '0':
        state = 58;
        break;
case '1':
        state = 58;
        break;
}
break;
case 59:
switch(s[i]) {
case '0':
        state = 27;
        break;
case '1':
        state = 56;
        break;
}
break;
case 60:
switch(s[i]) {
case '0':
        state = 60;
        break;
case '1':
        state = 60;
        break;
}
break;
case 61:
switch(s[i]) {
case '0':
        state = 61;
        break;
case '1':
        state = 61;
        break;
}
break;
case 62:
switch(s[i]) {
case '0':
        state = 62;
        break;
case '1':
        state = 62;
        break;
}
break;
                }
        }
return !(state == 46 || state == 54 || state == 58 || state == 60 || state == 61 || state == 62);
}



int main() {
    string str;
    cin >> str;
    while (str != "a") {
        cout << f7(str) << endl;
        cin >> str;
    }
}