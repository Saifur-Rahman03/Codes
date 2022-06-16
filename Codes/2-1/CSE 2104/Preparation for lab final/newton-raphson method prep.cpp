#include <iostream>
#include <cmath>
using namespace std;
double f(double x)
{
//	return ((x * sin(x) + cos(x)));
	return(x * exp(x) - 1);
}
double df(double x)
{
	return (x * exp(x) + exp(x));
}
void newtonRaphsonMethod();
int main()
{
	newtonRaphsonMethod();
}
void newtonRaphsonMethod()
{
	double x, x1;
	cout << "initial value: ";
	cin >> x;
	int i = 1;
	while(1){
		x1 = x - (f(x) / df(x));
		cout << "x" << i << " : " << x1 << endl;
		i++;
		if(abs(x1 - x) <= 0.0001)
			break;
		x = x1;
	}
	cout << "Root: " << x1 << endl;
}
