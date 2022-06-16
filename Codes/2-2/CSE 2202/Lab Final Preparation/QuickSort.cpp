#include <iostream>
#include <fstream>
#define MAXINT 65535
#include <random>
#include <ctime>

using namespace std;

int n = 10;
long long int count = 0;
int partitionFunction(int *a, int l, int h);
void quickSortFunction(int *a, int l, int h);
void printArray(int *a);
void swapFunction(int *x,  int *y);
void generateRandomFunction(int *a, int range);

int main()
{
	/*ifstream fin;
	fin.open("QuickSort Input.txt");
	fin >> n;
	int a[n + 1];
	for(int i = 0; i < n; i++) {
		fin >> a[i];
	}
	a[n] = MAXINT;
	printArray(a);
	quickSortFunction(a, 0, n);
	printArray(a);
	*/
	while(1) {
		int a[10 * n + 1];
		generateRandomFunction(a, 10 * n);
		a[10 * n+ 1] = MAXINT;
		quickSortFunction(a, 0, 10 * n + 1);
		cout << "no of data: " << n << "\tno of operations: " << count << endl;
		count = 0;
		if(n >= 10000) {
			n += 10000;
		}
		else {
			n *= 10;
		}
		if(n >= 50001) {
			break;
		}
	}
}

void generateRandomFunction(int *a, int range)
{
	//srand(time(0));
	for(int i = 0; i < range; i++) {
		a[i] = rand() % 100000;
	}
}

int partitionFunction(int *a, int l, int h)
{
	count += 3;
	int pivot = a[l];
	int i = l;
	int j = h;
	while(i < j) {
		do {
			i++;
			count++;
		} while(a[i] <= pivot);
		do {
			j--;
			count++;
		} while(a[j] > pivot);
		if(i < j) {
			swapFunction(&a[i], &a[j]);
		}
	}
	swapFunction(&a[l], &a[j]);
	//printArray(a);
	return j;
}

void quickSortFunction(int *a, int l, int h)
{
	if(l < h) {
		int j = partitionFunction(a, l, h);
		count++;
		quickSortFunction(a, l, j);
		quickSortFunction(a, j + 1, h);
	}
}

void printArray(int *a)
{
	for(int i = 0; i < n; i++) {
		cout << a[i] << " ";
	}
	cout << endl;
}

void swapFunction(int *x,  int *y)
{
	 int temp = *x;
	*x = *y;
	*y = temp;
	count++;
}
