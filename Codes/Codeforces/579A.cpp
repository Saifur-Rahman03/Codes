#include <bits/stdc++.h>

using namespace std;
string binaryValue(int a);
int main()
{
	int x;
	int c = 0;
	cin >> x;
	string s = binaryValue(x);
//	cout << s << endl;
	for(int i = 0; i < s.length(); i++){
		if(s[i] == '1')
			c++;
	}
	cout << c << endl;
}
string binaryValue(int a)
{
	int r;
	string bin = "";

	while(1){
		r = a % 2;
//		cout << a << "\t" << r << endl;
		a =  a / 2;
		bin.push_back('0' + r);
		if(a == 0){
			break;
		}
	}
	reverse(bin.begin(), bin.end());
	return bin;
}
