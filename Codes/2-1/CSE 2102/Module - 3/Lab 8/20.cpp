#include <iostream>
using namespace std;
int gcdEucledean(int a, int b);
int main()
{
	int a, b;
	cout << "Enter two positive integer: ";
	cin >> a >> b;
	cout << "Greatest common divisor of " << a << " and " << b << " is " << gcdEucledean(a, b) << endl;
	return 0;
}
int gcdEucledean(int a, int b)
{
	int x = a;
	int y = b;
	int r;
	while(y != 0){
		r = x % y;
		x = y;
		y = r;
	}
	return x;
}
