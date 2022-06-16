#include <bits/stdc++.h>

using namespace std;

int main()
{
	int  i, c = 0, flag = 1;
	long long int n;
	cin >> n;

	string s = to_string(n);

	for(i = 0; i < s.size(); i++){
		if(s[i] == '4' || s[i] == '7'){
			c++;
		}
	}


	string r = to_string(c);

	for(i = 0; i < r.size(); i++){
		if(r[i] != '4' && r[i] != '7'){
			flag = 0;
			break;
		}
	}

	if(flag == 1)
		cout << "YES" << endl;
	else
		cout << "NO" << endl;



}
