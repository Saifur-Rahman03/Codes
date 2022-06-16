#include <bits/stdc++.h>

using namespace std;

int main()
{
	string s = "AxCDEF";
	char *ptr;

	ptr = &s[0];
	cout << *ptr << endl;
	cout << *(ptr + 1) << endl;
	ptr+= 2;
	cout << *ptr << endl;
	cout << *(ptr + 1) << endl;
}
