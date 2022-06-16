#include <iostream>
#include <cmath>
using namespace std;
double func(double x);
void falsePositionMethod();
int main()
{
	falsePositionMethod();
}
void falsePositionMethod()
{
	double a, b;
	cout << "initial value: ";
	cin >> a;
	for(int i = a + 1; ;  i++){
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
	double x, x1;
	x = (a * func(b) - b * func(a)) / (func(b) - func(a));
	int i = 1;
	cout << "x" << i << " : " << x << endl;
	while(1){
		if(func(a) * func(x) < 0)
			b = x;
		else if(func(a) * func(x) > 0)
			a = x;
		else if(func(a) * func(x) == 0)
			break;
		x1 = (a * func(b) - b * func(a)) / (func(b) - func(a));
		cout << "x" << i << " : " << x << endl;
		i++;
		if(abs(x1 - x) <= 0.0001)
			break;
		x = x1;
	}
	cout << "Root: " << x << endl;
}
double func(double x)
{
	return (pow(x, 3) - (2 * x) - 5);
}
