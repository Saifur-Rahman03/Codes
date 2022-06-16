#include <iostream>
#include <cmath>
using namespace std;
int func1(int x){return x * x;}
int func2(int x){return x + 1;}
int func3(int x){return (x * x * x) + (x * x) + x + 1;}
void check_func(int *f);
int n;
int main()
{
	int i, j;
	cout << "Enter n: ";
	cin >> n;
	cout << endl;
	int x[n], f1[n], f2[n], f3[n];
	for(i = 0; i < n; i++)
		x[i] = i + 1;
	for(i = 0; i < n; i++){
		f1[i] = func1(x[i]);
		f2[i] = func2(x[i]);
		f3[i] = func3(x[i]);
	}
	cout << "f(x) = x^2 is ";
	check_func(f1);
	cout << "f(x) = x + 1 is ";
	check_func(f2);
	cout << "f(x) = x^3 + x^2 + x + 1 is ";
	check_func(f3);
}
void check_func(int *f)
{
	int flag = 0;
	for(int i = 0; i < n; i++){
		for(int j = 0; j < i; j++){
			if(f[i] == f[j]){
				flag == 1;
				break;
			}
			if(flag == 1)
				break;
		}
	}
	if(flag == 0)
		cout << "One-to-One Function\n";
	else
		cout << "Not One-to-One Function\n";
}
