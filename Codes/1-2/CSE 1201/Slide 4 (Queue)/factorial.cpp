#include <iostream>
using namespace std;
int fact(int n);
int main()
{
	int n;
	cin >> n;
	cout << "Factorial = " << fact(n) << endl;
	return 0;
}
int fact(int n)
{
	if(n == 0)
		return 1;
	else
		return (n * fact(n - 1));
}
