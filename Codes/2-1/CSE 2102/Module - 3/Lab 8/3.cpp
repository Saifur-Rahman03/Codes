#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
void inputArray(int *a, int n);
void outputArray(int *a, int n);
int linearSearch(int *a, int n, int x);
int main()
{
	int n, x;
	cout << "Enter n: ";
	cin >> n;
	int a[n], i;
	inputArray(a, n);
	outputArray(a, n);
	cout << "Enter integer: ";
	cin >> x;
	cout << "position of " << x << " is " << linearSearch(a, n, x) << endl;
	return 0;
}
void inputArray(int *a, int n)
{
	srand((unsigned) time(0));
	for(int i = 0; i < n; i++)
		a[i] = rand() % (n + 1);
}
void outputArray(int *a, int n)
{
	cout << "Array:\n";
	for(int i = 0; i < n; i++)
		cout << a[i] << " ";
	cout << endl;
}
int linearSearch(int *a, int n, int x)
{
	int pos, flag = 0;
	for(int i = 0; i < n; i++)
		if(a[i] == x){
			pos = i;
			flag = 1;
			break;
		}
	if(flag == 0)
		cout << "Not Found\n";
	else
		return pos;
}

