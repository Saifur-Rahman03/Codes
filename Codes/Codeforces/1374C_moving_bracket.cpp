#include <bits/stdc++.h>

using namespace std;

int main()
{
	int t, n, i, b = 0, f = 0;
	string s;
	cin >> t;
	while(t--){
		b = 0;
		cin >> n;
		cin >> s;
		for(i = 0; i < n; i++){
			if(s[i] == '(')
				f++;
			if(s[i] == ')')
				break;
			}
		for(i = 0; i < n; i++){
			if(s[i] == '(')
				f++;
			if(s[i] == ')')
				break;
			}
		cout << f << endl;
		cout << b << endl;
	}
}
