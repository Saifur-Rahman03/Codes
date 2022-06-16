#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
void inputArray(int *a, int n);
void outputArray(int *a, int n);
void insertionSort(int *a, int n);
int main()
{
	int n, x;
	cout << "Enter n: ";
	cin >> n;
	int a[n], i;
	inputArray(a, n);
	outputArray(a, n);
	insertionSort(a, n);
	cout << "Sorted ";
	outputArray(a, n);
	return 0;
}
void inputArray(int *a, int n)
{
	srand((unsigned) time(0));
	for(int i = 0; i < n; i++)
		a[i] = rand() % (n * n);
}
void outputArray(int *a, int n)
{
	cout << "Array:\n";
	for(int i = 0; i < n; i++)
		cout << a[i] << " ";
	cout << endl;
}
void insertionSort(int *a, int n)
{
	int i, j, key;
	for(i = 1; i < n; i++){
		key = a[i];
		j = i - 1;
	while((j >= 0) && (a[j] > key)){
			a[j + 1] = a[j];
			j--;
		}
		a[j + 1] = key;
	}
}
