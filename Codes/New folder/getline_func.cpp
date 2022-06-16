#include <bits/stdc++.h>

using namespace std;

int main()
{
	int n;
	cin >> n;
	if(n == 1){
			string s;
	cout << "\nEnter a string: ";
	cin.ignore();
	getline(cin, s);
	for(int i = 0; i < s.length(); i++){

			cout << int(s[i]) << " ";
		}
		cout << endl;

	cout << s << endl;

	}
}
