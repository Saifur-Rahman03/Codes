#include <iostream>
#include <cmath>
using namespace std;
const double h = 0.5, k = 0.5;
double x1 = 0.0, x2 = 1.0, Y1 = 0.0, y2 = 1.0;
double f(double a, double b){return exp(a + b);}
double trap(double m[3][3]);
int main()
{
	double x[3][3];
	double X[3], Y[3];
	int i, j;
	for(i = 0; i < 3; i++){
		X[i] = x1;
		x1 += h;
	}
	for(i = 0; i < 3; i++){
		Y[i] = Y1;
		Y1 += k;
	}
	for(i = 0; i < 3; i++){
		for(j = 0; j < 3; j++){
			x[i][j] = f(X[i], Y[j]);
		}
	}
	for(i = 0; i < 3; i++){
		for(j = 0; j < 3; j++){
			cout << x[i][j] << "\t";
		}
		cout << endl;
	}
	cout << "result: " << trap(x) << endl;
}
double trap(double m[3][3])
{
	int i, j;
	double sum = m[0][0] + m[2][2];
	for(i = 0; i < 3; i++){
		for(j = 0; j < 3; j++){
			if(i == 0 && j == 0|| i == 2 && j == 2)
				continue;
			else
				sum += 2 * m[i][j];
		}
	}
	sum *= (h * k) / 4;
	return sum;
}
