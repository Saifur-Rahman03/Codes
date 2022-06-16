#include <iostream>
#include <string>
using namespace std;
int main()
{
	string s;
	int flag = 0;
	cin >> s;
	for(int i = 0; i < s.length(); i++){
		if(s[i] == 'H' || s[i] == 'Q' || s[i] == '9'){
			flag = 1;
			if(s[i] == '+')
				flag = 1;
		}

	}
	if(flag == 1)
		cout << "YES" << endl;
	else
		cout << "NO" << endl;

	return 0;
}
