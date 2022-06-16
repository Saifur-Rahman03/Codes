#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
void inputArray(int *a, int n);
void outputArray(int *a, int n);
void bubbleSort(int *a, int n);
int main()
{
	int n, x;
	cout << "Enter n: ";
	cin >> n;
	int a[n], i;
	inputArray(a, n);
	outputArray(a, n);
	bubbleSort(a, n);
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
void bubbleSort(int *a, int n)
{
	int i, j, temp;
	for(i = 0; i < n - 1; i++){
		for(j = 0; j < n - 1 - i; j++){
			if(a[j] > a[j + 1]){
				temp = a[j];
				a[j] = a[j + 1];
				a[j + 1] = temp;
			}
		}
	}
}
