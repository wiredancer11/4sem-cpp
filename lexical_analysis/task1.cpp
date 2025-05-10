#include <iostream>
#include <clocale>
#include <cstdlib>

using namespace std;

char tr[] = "��*����*��*�����*�**��";

void transl(char *s)
{
    int state = 0, i = -1;
	while(s[++i]!=0 && state!=9)
		switch(state)
	    {
			case 0: switch(s[i])
					{
						case 'c': state = 5; break;
						case 'h': case 'q':	case 'w': case 'x':
								  state = 9; break;
						case 'k': state = 4; break;
						case 's': state = 3; break;
						case 't': state = 6; break;
						case 'y': state = 1; break;
						case 'z': state = 2; break;
						case ' ': cout<<' '; break;
						case '\"': cout<<'�'; break;
						case '\'': cout<<'�'; break;
                        case '@':break;
						default: cout<<tr[s[i]-'a'];
					}
					break;
			case 1: switch(s[i])
					{
						case 'a': state = 0; cout<<'�'; break;
						case 'e': state = 0; cout<<'�'; break;
						case 'o': state = 0; cout<<'�'; break;
						case 'u': state = 0; cout<<'�'; break;
						case 'c': state = 5; cout<<'�'; break;
						case 'h': case 'q':	case 'w': case 'x':
								  state = 9; cout<<'�'; break;
						case 'k': state = 4; cout<<'�'; break;
						case 's': state = 3; cout<<'�'; break;
						case 't': state = 6; cout<<'�'; break;
						case 'y': state = 1; cout<<'�'; break;
						case 'z': state = 2; cout<<'�'; break;
						case ' ': state = 0; cout<<"� "; break;
						case '\"': state = 0; cout<<"��"; break;
						case '\'': state = 0; cout<<"��"; break;
                        case '@': state = 0; cout << "�";break;
						default: state = 0; cout<<'�'<<tr[s[i]-'a'];
					}
					break;
			case 2: switch(s[i])
					{
						case 'h': state = 0; cout<<'�'; break;
						case 'q': case 'w': case 'x':
								  state = 9; cout<<'�'; break;
						case 'c': state = 5; cout<<'�'; break;
						case 'k': state = 4; cout<<'�'; break;
						case 's': state = 3; cout<<'�'; break;
						case 't': state = 6; cout<<'�'; break;
						case 'y': state = 1; cout<<'�'; break;
						case 'z': state = 2; cout<<'�'; break;
						case ' ': state = 0; cout<<"� "; break;
						case '\"': state = 0; cout<<"��"; break;
						case '\'': state = 0; cout<<"��"; break;
						case '@': state = 0; cout<<"�"; break;
						default: state = 0; cout<<'�'<<tr[s[i]-'a'];
					}
					break;
			case 3: switch(s[i])
					{
						case 'h': state = 7; break;
						case 'q': case 'w': case 'x':
								  state = 9; cout<<'�'; break;
						case 'c': state = 5; cout<<'�'; break;
						case 'k': state = 4; cout<<'�'; break;
						case 's': state = 3; cout<<'�'; break;
						case 't': state = 6; cout<<'�'; break;
						case 'y': state = 1; cout<<'�'; break;
						case 'z': state = 2; cout<<'�'; break;
						case ' ': state = 0; cout<<"� "; break;
						case '\"': state = 0; cout<<"��"; break;
						case '\'': state = 0; cout<<"��"; break;
						case '@': state = 0; cout<<"�"; break;
						default: state = 0; cout<<'�'<<tr[s[i]-'a'];
					}
					break;
			case 4: switch(s[i])
					{
						case 'h': state = 0; cout<<'�'; break;
						case 'q': case 'w': case 'x':
								  state = 9; cout<<'�'; break;
						case 'c': state = 5; cout<<'�'; break;
						case 'k': state = 4; cout<<'�'; break;
						case 's': state = 3; cout<<'�'; break;
						case 't': state = 6; cout<<'�'; break;
						case 'y': state = 1; cout<<'�'; break;
						case 'z': state = 2; cout<<'�'; break;
						case ' ': state = 0; cout<<"� "; break;
						case '\"': state = 0; cout<<"��"; break;
						case '\'': state = 0; cout<<"��"; break;
						case '@': state = 0; cout<<"�"; break;
						default: state = 0; cout<<'�'<<tr[s[i]-'a'];
					}
					break;
			case 5: if(s[i]=='h') { state = 0; cout<<'�'; } 
					else state = 9;
					break;
			case 6: switch(s[i])
					{
						case 's': state = 0; cout<<'�'; break;
						case 'h': case 'q': case 'w': case 'x':
								  state = 9; cout<<'�'; break;
						case 'c': state = 5; cout<<'�'; break;
						case 'k': state = 4; cout<<'�'; break;
						case 't': state = 6; cout<<'�'; break;
						case 'y': state = 1; cout<<'�'; break;
						case 'z': state = 2; cout<<'�'; break;
						case ' ': state = 0; cout<<"� "; break;
						case '\"': state = 0; cout<<"��"; break;
						case '\'': state = 0; cout<<"��"; break;
						case '@': state = 0; cout<<"�"; break;
						default: state = 0; cout<<'�'<<tr[s[i]-'a'];
					}
					break;
			case 7: switch(s[i])
					{
						case 'c': state = 8; break;
						case 'h': case 'q': case 'w': case 'x':
								  state = 9; cout<<'�'; break;
						case 'k': state = 4; cout<<'�'; break;
						case 's': state = 3; cout<<'�'; break;
						case 't': state = 6; cout<<'�'; break;
						case 'y': state = 1; cout<<'�'; break;
						case 'z': state = 2; cout<<'�'; break;
						case ' ': state = 0; cout<<"� "; break;
						case '\"': state = 0; cout<<"��"; break;
						case '\'': state = 0; cout<<"��"; break;
						case '@': state = 0; cout<<"�"; break;
						default: state = 0; cout<<'�'<<tr[s[i]-'a'];
					}
					break;
			case 8: if(s[i]=='h') { state = 0; cout<<'�'; } 
					else { state = 9; cout<<'�'; }
	    }
    switch (state) {
        case 1: cout << "�"; break;
        case 2: cout << "�"; break;
        case 3: cout << "�"; break;
        case 4: cout << "�"; break;
        case 5: state = 9; break;
        case 6: cout << "�"; break;
        case 7: cout << "�"; break;
        case 8: state = 9; break;
    }
	if(state==9)
		cout<<"Error!";
	cout<<endl;
}

int main()
{
	setlocale(LC_ALL, "Russian");
	char buf[100];
	cin>>buf;
	transl(buf);
	return EXIT_SUCCESS;
}