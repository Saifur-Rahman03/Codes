#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
float x1 = 0.0, x2 = 1.0;
float h = 1.0 / 6.0;
int n = ceil(x2 / h);
float func(float x){return 1.0 / (1 + x);}
float simp3(float *x, float *y);
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
	cout << "result: " << simp3(x, y) << endl;

}
float simp3(float *x, float *y)
{
	float sum = y[0] + y[n];
	for(int i = 1; i < n; i++){
		if(i % 3 == 0)
			sum += 2 * y[i];
		else
			sum += 3 * y[i];
	}
	sum *= (3 * h / 8);
	return sum;
}

