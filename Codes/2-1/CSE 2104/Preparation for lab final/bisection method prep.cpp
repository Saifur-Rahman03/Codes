#include <iostream>
#include <cmath>
using namespace std;
double func(int x);
void bisectionMethod();
int main()
{
	bisectionMethod();
}
double func(double x)
{
	return (pow(x, 3) - (2 * x) - 5);
}
void bisectionMethod()
{
	double a, b, i;
	cout << "initial value: ";
	cin >> a;
	double f;
	f = func(a);
	for(i = a + 1; ; i++){
		if(func(a) > 0){
			b = i;
			if(func(b) < 0)
				break;
		}
		if(func(a) < 0){
			b = i;
			if(func(b) > 0)
				break;
		}
	}
	double x, x0;
	x = (a + b) / 2.0;
	i = 1;
	cout << "x" << i << " : " << x << endl;
	while(1){
		if(func(a) * func(x) > 0){
			a = x;
		}
		else if(func(a) * func(x) < 0){
			b = x;
		}
		else if(func(a) * func(x) == 0)
			break;
		i++;
		cout << "x" << i << " : " << x << endl;
		x0 = (a + b) / 2.0;
		if(abs(x - x0) <= 0.0001)
			break;
		x = x0;
	}
	cout << "Final Root: " << x << endl;
}
