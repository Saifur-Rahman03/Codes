#include<iostream>
using namespace std;
void trap(double a[10][10], int n);
void Sim(double a[10][10], int n);
const double h = 2.0, k=2.0;
int main()
{
	int n = 4.0 / h;
	int i, j;
	double x[n+1],y[n+1];
	x[0] = 0.0;
	y[0] = -2.0;
	for(i = 1; i <= n; i++){
		x[i] = x[i-1] + h;
		y[i] = y[i-1] + h;
	}
	cout<<"x\ty\b\n";
	for(i = 0; i <= n; i++)
		cout<<x[i]<<"\t"<<y[i]<<endl;
	cout<<endl;
	double a[10][10];
	for(i = 0; i <= n; i++){
		for(j = 0; j <= n; j++)
			a[i][j] = x[j] * x[j] - x[j] * y[i] + y[i] * y[i];
	}
	cout << "a[i][j]:\n";
	for(i = 0; i <= n; i++){
		for(j = 0;j <= n; j++)
			cout<<a[i][j]<<"\t";
		cout<<endl;
	}
	cout<<endl;
	int n1;
	while(1){
		cout<<"\n1. Trapizoidal\n2. Simpson's 1/3\n3. Exit\nPress : ";
		cin >> n1;
		if(n1 == 1)
			trap(a, n);
		else if(n1 == 2)
			Sim(a, n);
		else
			break;
	}
	return 0;
}
void trap(double a[10][10], int n)
{
	int i, j;
	double sum = 0, r;
	for(i = 0; i <= n; i++){
		for(j = 0; j <= n; j++){
			if((i == 0 && j == 0) || (i == n && j == n))
				sum += a[i][j];
			else
				sum += 2 * a[i][j];
		}
	}
	r = ((h * k) / 4.0) * sum;
	cout<<"Solution from Trapezoidal rule: " << r << endl;
}
void Sim(double a[10][10], int n)
{
	int i,j;
	double sum = 0, r;
	for(i = 0; i <= n; i++){
		for(j = 0; j <= n; j++){
			if((i==0||i==n)&&(j==0||j==n))
				sum += a[i][j];
			else if(i==j)
				sum += 16 * a[i][j];
			else
				sum += 4 * a[i][j];
		}
	}
	r = ((h * k) / 9.0) * sum;
	cout<<"Solution from Simpson's rule: " << r << endl;
}
