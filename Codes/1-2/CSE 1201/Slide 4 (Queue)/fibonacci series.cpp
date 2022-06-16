#include <iostream>
using namespace std;
int main()
{
	int x, y, z, i, n;
	int a[100000];
	x = 0; y = 1;
	a[0] = x; a[1] = y;
	cout << "How many Fibonacci numbers = ";
	cin >> n;
	for(i = 2; i < n; i++){
		z = x + y;
		a[i] = z;
		x = y;
		y = z;
	}
	cout << "Fibonacci series:" << endl;
	for(i = 0; i < n; i++)
		cout << a[i] << "   ";
	cout << endl;
}
