#include <iostream>
#include <clocale>
#include <cstdlib>

using namespace std;

char tr[] = "אב*ה‎פד*טי*כלםמן*נ**ףג";

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
						case '\"': cout<<'ת'; break;
						case '\'': cout<<'ü'; break;
                        case '@':break;
						default: cout<<tr[s[i]-'a'];
					}
					break;
			case 1: switch(s[i])
					{
						case 'a': state = 0; cout<<'ÿ'; break;
						case 'e': state = 0; cout<<'ו'; break;
						case 'o': state = 0; cout<<'¸'; break;
						case 'u': state = 0; cout<<'‏'; break;
						case 'c': state = 5; cout<<'û'; break;
						case 'h': case 'q':	case 'w': case 'x':
								  state = 9; cout<<'û'; break;
						case 'k': state = 4; cout<<'û'; break;
						case 's': state = 3; cout<<'û'; break;
						case 't': state = 6; cout<<'û'; break;
						case 'y': state = 1; cout<<'û'; break;
						case 'z': state = 2; cout<<'û'; break;
						case ' ': state = 0; cout<<"û "; break;
						case '\"': state = 0; cout<<"ûת"; break;
						case '\'': state = 0; cout<<"ûü"; break;
                        case '@': state = 0; cout << "û";break;
						default: state = 0; cout<<'û'<<tr[s[i]-'a'];
					}
					break;
			case 2: switch(s[i])
					{
						case 'h': state = 0; cout<<'ז'; break;
						case 'q': case 'w': case 'x':
								  state = 9; cout<<'ח'; break;
						case 'c': state = 5; cout<<'ח'; break;
						case 'k': state = 4; cout<<'ח'; break;
						case 's': state = 3; cout<<'ח'; break;
						case 't': state = 6; cout<<'ח'; break;
						case 'y': state = 1; cout<<'ח'; break;
						case 'z': state = 2; cout<<'ח'; break;
						case ' ': state = 0; cout<<"ח "; break;
						case '\"': state = 0; cout<<"חת"; break;
						case '\'': state = 0; cout<<"חü"; break;
						case '@': state = 0; cout<<"ח"; break;
						default: state = 0; cout<<'ח'<<tr[s[i]-'a'];
					}
					break;
			case 3: switch(s[i])
					{
						case 'h': state = 7; break;
						case 'q': case 'w': case 'x':
								  state = 9; cout<<'ס'; break;
						case 'c': state = 5; cout<<'ס'; break;
						case 'k': state = 4; cout<<'ס'; break;
						case 's': state = 3; cout<<'ס'; break;
						case 't': state = 6; cout<<'ס'; break;
						case 'y': state = 1; cout<<'ס'; break;
						case 'z': state = 2; cout<<'ס'; break;
						case ' ': state = 0; cout<<"ס "; break;
						case '\"': state = 0; cout<<"סת"; break;
						case '\'': state = 0; cout<<"סü"; break;
						case '@': state = 0; cout<<"ס"; break;
						default: state = 0; cout<<'ס'<<tr[s[i]-'a'];
					}
					break;
			case 4: switch(s[i])
					{
						case 'h': state = 0; cout<<'ץ'; break;
						case 'q': case 'w': case 'x':
								  state = 9; cout<<'ך'; break;
						case 'c': state = 5; cout<<'ך'; break;
						case 'k': state = 4; cout<<'ך'; break;
						case 's': state = 3; cout<<'ך'; break;
						case 't': state = 6; cout<<'ך'; break;
						case 'y': state = 1; cout<<'ך'; break;
						case 'z': state = 2; cout<<'ך'; break;
						case ' ': state = 0; cout<<"ך "; break;
						case '\"': state = 0; cout<<"ךת"; break;
						case '\'': state = 0; cout<<"ךü"; break;
						case '@': state = 0; cout<<"ך"; break;
						default: state = 0; cout<<'ך'<<tr[s[i]-'a'];
					}
					break;
			case 5: if(s[i]=='h') { state = 0; cout<<'ק'; } 
					else state = 9;
					break;
			case 6: switch(s[i])
					{
						case 's': state = 0; cout<<'צ'; break;
						case 'h': case 'q': case 'w': case 'x':
								  state = 9; cout<<'ע'; break;
						case 'c': state = 5; cout<<'ע'; break;
						case 'k': state = 4; cout<<'ע'; break;
						case 't': state = 6; cout<<'ע'; break;
						case 'y': state = 1; cout<<'ע'; break;
						case 'z': state = 2; cout<<'ע'; break;
						case ' ': state = 0; cout<<"ע "; break;
						case '\"': state = 0; cout<<"עת"; break;
						case '\'': state = 0; cout<<"עü"; break;
						case '@': state = 0; cout<<"ע"; break;
						default: state = 0; cout<<'ע'<<tr[s[i]-'a'];
					}
					break;
			case 7: switch(s[i])
					{
						case 'c': state = 8; break;
						case 'h': case 'q': case 'w': case 'x':
								  state = 9; cout<<'ר'; break;
						case 'k': state = 4; cout<<'ר'; break;
						case 's': state = 3; cout<<'ר'; break;
						case 't': state = 6; cout<<'ר'; break;
						case 'y': state = 1; cout<<'ר'; break;
						case 'z': state = 2; cout<<'ר'; break;
						case ' ': state = 0; cout<<"ר "; break;
						case '\"': state = 0; cout<<"רת"; break;
						case '\'': state = 0; cout<<"רü"; break;
						case '@': state = 0; cout<<"ר"; break;
						default: state = 0; cout<<'ר'<<tr[s[i]-'a'];
					}
					break;
			case 8: if(s[i]=='h') { state = 0; cout<<'ש'; } 
					else { state = 9; cout<<'ר'; }
	    }
    switch (state) {
        case 1: cout << "û"; break;
        case 2: cout << "ח"; break;
        case 3: cout << "ס"; break;
        case 4: cout << "ך"; break;
        case 5: state = 9; break;
        case 6: cout << "ע"; break;
        case 7: cout << "ר"; break;
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