#include <iostream>
#include <cmath>
double x0, x1;
int i = 1;
double func(double x);
double diffunc(double x);
void iter();
void nr();
using namespace std;
int main()
{
	cout << "Given Equation:\n x = (1 + cosx)/3" << endl;
	int n;
	cout << "Choose option\n" << "1. Iteration\n" << "2. Newton-Raphson\n" << "3. Exit\n";
	while(1){
		cin >> n;
		if(n == 1){
			cout << "\nIteration Method\n\n";
			iter();
		}
		if(n == 2){
			cout << "\nNewton-Raphson Method\n\n";
			nr();
		}
		if(n == 3){
			cout << "Ending Program\n";
			break;
		}
	}
}
double func(double x)
{
	double f;
	f = 1 - (3 * x) + cos(x);
	return f;
}
double diffunc(double x)
{
	double df;
	df = -3 - sin(x);
	return df;
}
void iter()
{
	cout << "Choose an initial value: ";
	cin >> x0;
	i = 1;
	cout << "x1: " << x0 << endl;
	while(1){
		i++;
		x1 = (1 + cos(x0)) / 3;
		if(abs(x1 - x0) <= 0.0001){
			cout << "\nRoot: " << x1 << endl << endl;
			break;
			}
		else{
			cout << "x" << i << ": " << x1 << endl;
			x0 = x1;
 		}
	}
}
void nr()
{
	cout << "Choose an initial value: ";
	cin >> x0;
	i = 1;
	cout << "x1: " << x0 << endl;
 	while(1){
		i++;
		x1 = x0 - (func(x0) / diffunc(x0));
		if(abs(x1 - x0) <= 0.0001){
			cout << "\nRoot: " << x1 << endl << endl;
			break;
		}
		else{
			cout << "x" << i << ": " << x1 << endl;
			x0 = x1;
 		}

	}
	return;
}
