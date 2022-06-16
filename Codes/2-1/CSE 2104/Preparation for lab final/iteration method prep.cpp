#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
void iterationMethod();
double func(double x);
int main()
{
	iterationMethod();
}
double func(double x)
{
//	return (1 / sqrt(1 + x));
	return (0.5 * (cos(x) + 3));
}

void iterationMethod()
{
	double x1, x;
	cout << "initial value: ";
	cin >> x;
	int i = 1;
	while(1){
		x1 = func(x);
		cout << "x" << i << " : " << x1 << endl;
		i++;
		if(abs(x1 - x) < 0.0001)
			break;
		x = x1;
	}
	cout << setprecision(4) << "Root: " << x1 << endl;
}
