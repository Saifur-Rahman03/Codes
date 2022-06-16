#include <iostream>
#include <string.h>
using namespace std;
int main()
{
	string s;
	int i, t1, t2, t3 , t4, t5;
	cin >> s;
	t1 = t2 = t3 = t4 = t5 = 0;
	for(i = 0; i < s.length(); i++){
		if(s[i] == 'h'){
			t1 = i;
			break;
		}
	}
	for(i = t1; i < s.length(); i++){
		if(s[i] == 'e'){
			t2 = i;
			break;
		}
	}
	for(i = t2; i < s.length(); i++){
		if(s[i] == 'l'){
			t3 = i;
			break;
		}
	}
	for(i = t3 + 1; i < s.length(); i++){
		if(s[i] == 'l'){
			t4 = i;
			break;
		}
	}
	for(i = t4; i < s.length(); i++){
		if(s[i] == 'o'){
			t5 = i;
			break;
		}
	}

	if(t1 < t2  && t2 < t3 && t3 < t4 && t4 < t5 )
		cout << "YES" << endl;
	else
		cout << "NO" << endl;

	return 0;
}
