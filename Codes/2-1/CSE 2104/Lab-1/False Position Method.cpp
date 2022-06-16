#include <iostream>
#include <cmath>
#include <cstdlib>
using namespace std;
double func(double x);
int main()
{
	int i;
	double f, x1, x, a, b;
	cout << "Equation: \nx^3 - x^2 - 1 = 0" << endl;
	a = 1;
	f = func(1);
	for(i = 2; ; i++){
		f = func(i);

		if(f > 0){
			b = i;
			break;
		}
		else
		{
			a = i;
		}
	}
	x = ((a * func(b)) - (b * func(a))) /  (func(b) - func(a));
	while(1){
		if((func(a) * func(x)) < 0){
			b = x;
		}
		else if((func(a) * func(x)) > 0){
			a = x;
		}
		else if((func(a) * func(x)) == 0){
			break;
		}
		x1 = ((a * func(b)) - (b * func(a))) /  (func(b) - func(a));
		if(abs(x1 - x) <= 0.0001)
			break;
		x = x1;
	}
	cout << "Root = " << x1 << endl;

}
double func(double x)
{
	double f;
	f = pow(x, 3) - x * x - 1;
	return f;
}
