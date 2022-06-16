#include <iostream>
using namespace std;
double fb(double p, int i);
double fact(int i);
int main()
{
	int n = 7;
	double y, del[7][7], p, p1, x0 = 1.15, x = 1.17, h = 0.05;
	p = (x - x0) / h;
	double X[7] = {1.00, 1.05, 1.10, 1.15, 1.20, 1.25, 1.30};
	double fx[7] = {2.7183, 2.8577, 3.0042, 3.1582, 3.3201, 3.4903, 3.6693};
	y = 0;
	int i, j;
	for(j = 0; j < 7; j++)
		del[0][j] = fx[j];
	for(i = 1; i < n; i++)
		for(j = 0; j < n - i; j++)
			del[i][j] = del[i - 1][j + 1] - del[i - 1][j];
	cout << "Difference Table:\n";
	for(j = 0; j < n; j++){
		for(i = 0; i < n - j; i++){
			if(del[i][j] > 0.000001)
				cout << del[i][j] << "   ";
			else
				cout << "0" << "   ";
		}
		cout << endl;
	}
	j = 1;
	int k = 1;
	p1 = p;
	cout << "\np: " << p << endl;
	cout << "\nForward Difference Formula: \n";
	for(i = 0; i < 4; i++)
			cout << del[i][(n - i)/ 2] << " ";
	for(i = 0; i < 4; i++){
		if(i == 0)
			y += (del[i][(n - i) / 2]);
		else if(i == 1)
			y += (del[i][(n - i) / 2]) * p;
		else if(i % 2 == 0){
			p1 *= (p - j); j++;
			y += (del[i][(n - i) / 2] * p1) / fact(i);
		}
		else if(i % 2 == 1) {
			p1 *= (p + k); k++;
			y += (del[i][(n - i) / 2] * p1) / fact(i);
		}
	}
	cout << "\nResult: " << y << endl;
	p1 = p;
	y = 0;
	cout << "\nBackward Difference Formula: \n";
	for(i = 0; i < 4; i++){
		if(i == 0){
			y += (del[i][(n - i) / 2]);
			cout << del[i][(n - i) / 2] << " ";
		}
		else if(i == 1){
			y += (del[i][(n - i) / 2 - 1]) * p;
			cout << del[i][(n - i) / 2 - 1] << " ";
		}
		else if(i == 3){
			p1 *= (p - j); j++;
			y += (del[i][(n - i) / 2 - 1] * p1) / fact(i);
			cout << del[i][(n - i) / 2 - 1] << " ";
		}
		else if(i == 2) {
			p1 *= (p + k); k++;
			y += (del[i][(n - i) / 2] * p1) / fact(i);
			cout << del[i][(n - i) / 2] << " ";
		}
	}
	cout << "\nResult: " << y << endl;
	return 0;
}
double fact(int i)
{
	double j, f = 1.0;
	for(j = 1.0; j <= i; j++)
		f *= j;
	if(i == 0)
		return 1;
	else
		return f;
}
