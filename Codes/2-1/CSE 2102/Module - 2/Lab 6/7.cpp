#include <iostream>
#include <cmath>
using namespace std;
int L, U, a, d, r;
int func1();
int func2();
int func3();
int main()
{
	cout << "Enter L: ";
	cin >> L;
	cout << "Enter U: ";
	cin >> U;
	cout << "Enter a: ";
	cin >> a;
	cout << "Enter d: ";
	cin >> d;
	cout << "Enter r: ";
	cin >> r;
	cout << "\nSum1: " << func1() << endl;
	cout << "Sum2: " << func2() << endl;
	cout << "Sum3: " << func3() << endl;
}
int func1()
{
	int i, j, sum = 0;
	for(i = L; i <= U; i++)
		sum += a + (i * d);
	return sum;
}
int func2()
{
	int i, j, sum = 0;
	for(i = L; i <= U; i++)
		sum += a * pow(r, i);
	return sum;
}
int func3()
{
	int i, j, sum = 0;
	for(i = L; i <= U; i++)
		for(j = L; j <= U; j++)
			sum += i + j;
	return sum;
}
