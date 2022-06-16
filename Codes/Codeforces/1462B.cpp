#include <bits/stdc++.h>
#include <iostream>
#include <cstring>
using namespace std;

int main()
{
	int t;
	cin >> t;
	while(t--) {
		int n;
		int flag = 0;
		cin >> n;
		string s;
		cin >> s;
		if(n < 4) {
			cout << "NO" << endl;
			continue;
		}

		string s1 = s.substr(0, 1);
		string s2 = s.substr(n - 3);
		//cout << s1 << " " << s2 << endl;
		if(s1 == "2" && s2 == "020") {
			flag = 1;
		}
		s1 = s.substr(0, 2);
		s2 = s.substr(n - 2);
			//	cout << s1 << " " << s2 << endl;
		if(s1 == "20" && s2 == "20") {
			flag = 1;
		}
		s1 = s.substr(0, 3);
		s2 = s.substr(n - 1);
			//	cout << s1 << " " << s2 << endl;
		if(s1 == "202" && s2 == "0") {
			flag = 1;
		}
		s1 = s.substr(n - 4);
		if(s1 == "2020") {
			flag = 1;
		}
			//	cout << s1 << " " <<s1.length() <<  endl;
		s1 = s.substr(0, 4);
		if(s1 == "2020") {
			flag = 1;
		}
		if(flag == 1) {
			cout << "YES" << endl;
		}
		else {
			cout << "NO" << endl;
		}
	}
}
