#include <bits/stdc++.h>
#include <chrono>
#define MAXINT 65535


using namespace std;
using namespace std::chrono;

int partitionFunction(int *a, int l, int h);
void quickSortFunction(int *a, int l, int h);
void printArray(int *a, int n);
void swapFunction(int *x,  int *y);
void generateRandomFunction(int *a, int range);

int main()
{
	ifstream fin;
	fin.open("quick.txt");
	while(!fin.eof()) {
		int n;
		fin >> n;
		int a[n + 1];
		generateRandomFunction(a, n);
		auto t1 = chrono::high_resolution_clock::now();
		ios_base::sync_with_stdio(false);
		quickSortFunction(a, 0, n);
		auto t2 = chrono::high_resolution_clock::now();
		double time_taken = chrono::duration_cast<chrono::microseconds>(t2 - t1).count();
		cout << " no of elements: "<< n << "\tTime taken by function: "
			<< time_taken  << " microseconds" << endl;
	}
	return 0;
}

void generateRandomFunction(int *a, int range)
{
	for(int i = 0; i < range; i++) {
		a[i] = rand() % 100000;
	}
}

int partitionFunction(int *a, int l, int h)
{
	int pivot = a[l];
	int i = l;
	int j = h;
	while(i < j) {
		do {
			i++;
		} while(a[i] <= pivot);
		do {
			j--;
		} while(a[j] > pivot);
		if(i < j) {
			swapFunction(&a[i], &a[j]);
		}
	}
	swapFunction(&a[l], &a[j]);
	return j;
}

void quickSortFunction(int *a, int l, int h)
{
	if(l < h) {
		int j = partitionFunction(a, l, h);
		quickSortFunction(a, l, j);
		quickSortFunction(a, j + 1, h);
	}
}

void printArray(int *a, int n)
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
}
