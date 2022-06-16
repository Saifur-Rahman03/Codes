#include <bits/stdc++.h>

using namespace std;

int main()
{
	string s;
	int it, t, i, j, n, c1, c = 0, flag = 0;
	cin >> t;
	for(it = 0; it < t; it++){
		cin >> n;
		cin >> s;
		c = 0;
		flag = 0;
		for(j = 0; j < n; j++){
			//cout << " j = " << j << endl;
			if(s[j] == 'A' && s[j + 1] == 'P' && j != n - 1){
				c1 = j;
				flag = 1;
			//	cout << " c = " << c << endl;
			}
			else if(s[j] == 'P' && j == n - 1 && flag == 1){
			//	cout << " j = " << j << endl;
			//	cout << " c = " << c << endl;
				if((j - c1) > c)
					c = j - c1;
			}
			else if(s[j] == 'P' && s[j + 1] == 'A' && j != n - 1 && flag == 1){
				if((j - c1) > c)
					c = j - c1;
			}

		}



		cout << c << endl;
	}
}

