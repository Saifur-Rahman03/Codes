#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	long long int n;
	long long int f = 0;
	cin >> n;
	if(n % 2 == 0)
		f = n / 2;
	else
	{
		f = ((n - 1) / 2) - n;
	}
	cout << f << endl;
}
