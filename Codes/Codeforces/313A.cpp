#include <bits/stdc++.h>

using namespace std;

int main()
{
	string s;
	cin >> s;
	int l = s.length();
	if(s[0] == '-') {
		if(s[l - 1] < s[l - 2]) {
			s.erase(l - 2, 1);
		}
		else {
			s[l - 1] = s[l - 2];
			s.erase(l - 2, 1);
		}

		if(s[1] == '0') {
			s[0] = '0';
			s.erase(1, 1);
		}
	}

	cout << s << endl;

}
