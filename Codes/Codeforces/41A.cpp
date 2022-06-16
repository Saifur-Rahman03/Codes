#include <iostream>
using namespace std;

int main()
{
	string s, t;

	cin >> s;
	cin >> t;

	int i, j, flag = 0;

	for(i = 0, j = t.size() - 1; i < s.size(), j >= 0; i++, j--){
		if(s[i] == t[j]){
			flag = 1;
		}
		else{
			flag = 0;
			break;
		}
	}

	if(flag == 1)
		cout << "YES" << endl;
	else
		cout << "NO" << endl;

}
