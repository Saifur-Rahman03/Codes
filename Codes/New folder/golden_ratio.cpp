#include <bits/stdc++.h>
using namespace std;

int main()
{
	bool n;
	double a, b;
	cout << "larger or smaller (1 / 0): ";
	cin >> n;
	if (n ==  true){
		cin >> a;
		cout << a / 1.61803 << endl;
	}
	else{
		cin >> b;
		cout << b * 1.61803 << endl;
	}
}
