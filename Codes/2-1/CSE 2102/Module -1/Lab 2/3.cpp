#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n, i, j, p, q;
	cin >> n;
	int a[n], b[n], A[n], O[n], X[n];
	string s1, s2;
	cin >> s1 >> s2;
	for(i = 0; i < n; i++){
		a[i] = s1[i] - 48;
		b[i]= s2[i] - 48;
	}
	for(i = 0; i < n; i++){
		if(a[i] && b[i])
			A[i] = 1;
		else
			A[i] = 0;
		if(a[i] == 0 && b[i] == 0)
			O[i] = 0;
		else
			O[i] = 1;
		if(a[i] == b[i])
			X[i] = 0;
		else
			X[i] = 1;
		}
	cout << "AND operation: ";
	for(i = 0; i < n; i++)
		cout << A[i];
	cout << endl << "OR operation: ";
	for(i= 0; i < n; i++)
		cout << O[i];
	cout << endl << "XOR operation: ";
	for(i = 0; i < n; i++)
		cout << X[i];
        cout << endl;
        return 0;
}

