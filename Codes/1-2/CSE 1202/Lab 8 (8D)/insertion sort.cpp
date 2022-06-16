#include <iostream>
using namespace std;
void printArr(int *a, int n);
void insertionSort(int *a, int n);
int main()
{
	int a[5] = {20, 40, 15, 30, 10};
	int i, j, key, n = 5;
	cout << "Array before sorting\n";
	printArr(a, n);
	insertionSort(a, n);
	cout << "\nSorted Array\n";
	printArr(a, n);

	return 0;
}
void insertionSort(int *a, int n)
{
	int i, j, key;
	cout <<"i   j   key a[j] a[j + 1]\n";
	for(i = 1; i < n; i++){
		key = a[i];
		j = i - 1;
		cout << i << "   " << j << "   " << key << "   " << a[j] << "   " << a[j + 1] << endl;
		printArr(a, n);
		while((j >= 0) && (a[j] > key)){
			a[j + 1] = a[j];
			j--;
			cout << i << "   " << j << "   " << key << "   " << a[j] << "   " << a[j + 1] << endl;
			printArr(a, n);
		}
		a[j + 1] = key;
	}
}
void printArr(int *a, int n)
{
	for(int i = 0; i < n; i++)
		cout << a[i] << " ";
	cout << endl;
}
