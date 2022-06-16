#include <iostream>
#include <fstream>
#define n 5
using namespace std;
int main()
{
	double x[n], y[n];
	double xx[n], xy[n], a0, a1;
	double sumx = 0, sumy = 0, sumxx = 0, sumxy = 0;
	int i;
	ifstream fi;
	fi.open("curve fitting.txt");
	for(i = 0; i < n; i++)
		fi >> x[i];
	for(i = 0; i < n; i++)
		fi >> y[i];
	for(i = 0; i < n; i++){
		xx[i] = x[i] * x[i];
		xy[i] = x[i] * y[i];
		sumx += x[i];
		sumy += y[i];
		sumxx += xx[i];
		sumxy += xy[i];
	}
	cout << "x\t" << "y\t" << "x^2\t" << "xy" << endl;
	for(i = 0; i < n; i++){
		cout << x[i] << "\t" << y[i] << "\t" << xx[i] << "\t" << xy[i] << endl;
	}
	cout << sumx << "\t" << sumy << "\t" << sumxx << "\t" << sumxy << endl;

	a0 = ((sumx * (-1 * sumxy)) - (sumxx * (-1 * sumy))) / ((n * sumxx) - (sumx * sumx));
	a1 = ((sumx * (-1 * sumy)) - (n * (-1 * sumxy)) )/ ((n * sumxx) - (sumx * sumx));
	cout << "a0 = " << a0 << "\na1 = " << a1 << endl;
}
