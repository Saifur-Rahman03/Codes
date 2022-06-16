#include <iostream>
#include <fstream>
using namespace std;
int main()
{
	ifstream fi;
	fi.open("lagrange.txt");
	double x[5];
	double y[5];
	int i;
	for(i = 0; i < 5; i++)
		fi >> x[i];
	for(i = 0; i < 5; i++)
		fi >> y[i];
	double X = 0.22;
	double r = 0;
		for(i = 0; i < 5; i++){
			cout << x[i] << " " << y[i] << endl;
		}
	for(i = 0; i < 5; i++)
	r += ((((X - (x[(i + 1) % 5])) * ( X - (x[(i + 2) % 5])) * (X - (x[(i + 3) % 5])) * (X - (x[(i + 4) % 5]))))
		/
		((x[i] - (x[(i + 1) % 5])) * (x[i] - (x[(i + 2) % 5])) * (x[i] - (x[(i + 3) % 5])) * (x[i] - (x[(i + 4) % 5])))) * y[i];
	cout << r << endl;
}
