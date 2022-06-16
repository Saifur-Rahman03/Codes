#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
void inputArray(int *a, int n);
void outputArray(int *a, int n);
int maxInt (int *a, int n);
int main()
{
	int n;
	cout << "Enter n: ";
	cin >> n;
	int a[n], i;
	inputArray(a, n);
	outputArray(a, n);
	cout << "Largest Integer: " << maxInt(a, n) << endl;
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
int maxInt (int *a, int n)
{
	int max = 0;
	for(int i = 0; i < n; i++){
		if(a[i] > max)
			max = a[i];
	}
	return max;
}
