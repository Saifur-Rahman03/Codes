#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	cout << "Equation of Golden Ratio: x^2 - x - 1 = 0\n";
	int a = 1, b = -1, c = -1;
	double x;
	x = (- b + sqrt((b * b - 4 * a * c))) / (2.0 * a);
	cout << "Golden Ratio: " << x << " : 1 "<< endl;
	return 0;
}
