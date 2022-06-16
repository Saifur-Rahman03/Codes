#include <iostream>

using namespace std;

int main()
{
	string s;
	long int n, k;
	int i, l;

	cin >> s;
	cin >> k;
	n = stoi(s);
	l = s.length();
//	cout << s[l - 1] << endl;
	for(i = 0; i < k; i++) {
		if(s[l - 1] == '0') {
			n /= 10;
			s = to_string(n);
			l = s.length();
//			cout << n << endl;
//			cout << s << endl;
		}
		else {
			n -=	 1;
			s = to_string(n);
			//cout << n << endl;

		}
	}
	cout << n << endl;
}
