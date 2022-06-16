#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
float x1 = 0.0, x2 = 1.0;
float h = 1.0 / 6.0;
int n = ceil(x2 / h);
float func(float x){return 1.0 / (1 + x);}
float trap(float *x, float *y);
float simp1(float *x, float *y);
int main()
{
	int i;
	float x[n], y[n];
	for(i = 0; i <= n; i++){
		x[i] = x1;
		y[i] = func(x1);
		x1 += h;
	}
	cout << fixed;
	cout << "   x\t\t\t   y\n";
	for(i = 0; i < n; i++)
		cout << setprecision(4) << x[i] << "\t\t"<< setprecision(4) << y[i] << endl;
	cout << "result: " << simp1(x, y) << endl;

}
float simp1(float *x, float *y)
{
	float sum = y[0] + y[n];
	for(int i = 1; i < n; i++){
		if(i % 2 == 0)
			sum += 2 * y[i];
		else
			sum += 4 * y[i];
	}
	sum *= (h / 3);
	return sum;
}
