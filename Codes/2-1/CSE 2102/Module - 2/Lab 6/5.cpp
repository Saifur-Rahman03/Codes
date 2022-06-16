#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;
int func1 (int x){return x * x;}
int func2 (int x){return x + 1;}
int func3 (int x){return (x * x * x) + (x * x) + x + 1;}
void check_func(int *c, int *r);
void print_func(int *d, int *c, int *f);
int n;
int main()
{
	cout << "Enter n: ";
	cin >> n;
	int d[n], c[n], f1[n], f2[n], f3[n], i, j;
	srand(unsigned(time(0)));
	for(i = 0; i < n; i++){
		j = (rand() % n) + 1;
		d[i] = j;
		c[i] = j;
	}
	for(i = 0; i < n; i++){
		f1[i] = func1(d[i]);
		f2[i] = func2(d[i]);
		f3[i] = func3(d[i]);
	}
	print_func(d, c, f1);
	cout << "f(x) =  x ^ 2 is";
	check_func(c, f1);
	print_func(d, c, f2);
	cout << "f(x) =  x + 1 is";
	check_func(c, f2);
	print_func(d, c, f3);
	cout << "f(x) =  x ^ 3 + x ^ 2 + x + 1 is";
	check_func(c, f3);
}
void check_func(int *c, int *r)
{
	int i, j, flag = 0;
	for(i = 0; i < n; i++){
		for(j = i; j < n; j++){
			if(c[i] == r[j]){
				flag = 0;
				break;
			}
			else{
				flag = 1;
			}
		}
		if(flag == 1)
			break;
	}
	if(flag == 0)
		cout << " Onto Function\n";
	else
		cout << " Not Onto Function\n";
}
void print_func(int *d, int *c, int *f)
{
	cout << "\nDomain " << "Co-Domain " << "Range\n";
	for(int i = 0; i < n; i++){
		cout  << "  " << d[i] << "\t " << c[i] << "\t  " << f[i] << endl;
	}
}
