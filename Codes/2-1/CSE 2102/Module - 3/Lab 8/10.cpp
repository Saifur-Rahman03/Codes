#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
void inputArray(int *a, int *b, int n);
void outputArray(int *a, int n);
void bubbleSort(int *a, int n);
void insertionSort(int *a, int n);
int bub_com;
int ins_com;
int main()
{
	int n, x;
	cout << "Enter n: ";
	cin >> n;
	int a[n], b[n], i;
	inputArray(a, b, n);
	outputArray(a, n);
	bubbleSort(a, n);
	cout << "Bubble sorted ";
	outputArray(a, n);
	cout << "no. of swaps (bubble sort): " << bub_com << endl;
	outputArray(b, n);
	insertionSort(b, n);
	cout << "Insertion sorted ";
	outputArray(b, n);
	cout << "no. of swaps (insertion sort): " << ins_com << endl;
	return 0;
}
void inputArray(int *a, int *b, int n)
{
	srand((unsigned) time(0));
	for(int i = 0; i < n; i++)
		a[i] = rand() % (n + 100);
	for(int i = 0; i < n; i++)
		b[i] = a[i];
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
	bub_com = 0;
	for(i = 0; i < n - 1; i++){
		for(j = 0; j < n - 1 - i; j++){
			if(a[j] > a[j + 1]){
				bub_com++;
				temp = a[j];
				a[j] = a[j + 1];
				a[j + 1] = temp;
			}
		}
	}
}
void insertionSort(int *a, int n)
{
	int i, j, key;
	ins_com = 0;
	for(i = 1; i < n; i++){
		key = a[i];
		j = i - 1;
	while((j >= 0) && (a[j] > key)){
			a[j + 1] = a[j];
			ins_com++;
			j = j  -1;
		}
		a[j + 1] = key;
	}
}
