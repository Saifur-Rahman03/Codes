#include <iostream>
#include <cctype>
using namespace std;

int main()
{
	string s;
	int u, l, i;
	u = l = 0;

	cin >> s;

	for(i = 0; i < s.size(); i++){
		if(islower(s[i]))
			l++;
		else if(isupper(s[i]))
			u++;
	}

	for(i = 0; i < s.size(); i++){
		if(u > l){
			s[i] = toupper(s[i]);
		}
		else{
			s[i] = tolower(s[i]);
		}
	}

	cout << s << endl;
}
