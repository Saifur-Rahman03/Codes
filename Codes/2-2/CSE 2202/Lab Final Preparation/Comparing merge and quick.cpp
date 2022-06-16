#include <bits/stdc++.h>
#include <iostream>
#include <fstream>
#include <random>
#define MAXINT 65535


using namespace std;
long long int n = 10;
long long int c = 0;
long long int partitionFunction(int *a, int l, int h);
void quickSortFunction(long long int *a, long long int l, long long int h);
void mergeFunction(long long int *x, long long int l, long long int m, long long int r);
void mergeSortFunction(long long int *a, long long int l, long long int h);
void printArray(long long int *a, long long int n);
void swapFunction(long long int *x,  long long int *y);
void generateRandomFunction(long long int *a, long long int *b, long long int range);

int main()
{
	long long int a[MAXINT];
	long long int b[MAXINT];
	long long int quick;
	long long int merg;
	generateRandomFunction(a, b, MAXINT);
	while(1) {

		cout << "no of data: " << n << endl;
		quickSortFunction(a, 0, n + 1);
		cout << "no of quick operations: " << c << "\t";
		quick = c;
		c = 0;
		mergeSortFunction(b, 0, n);
		cout << "    no of merge operations: " << c << "\t";
		merg = c;
		c = 0;
		if(quick < merg) {
			cout << "Quick Sort" << endl;
		}
		else {
			cout << "Merge Sort" << endl;
		}
		if(n >= 1000) {
			n += 1000;
		}
		else {
			n *= 10;
		}
		if(n >= MAXINT) {
			break;
		}
	}
}

void generateRandomFunction(long long int *a, long long int *b, long long int range)
{
	srand(time(0));
	for(long long int i = 0; i < range; i++) {
		a[i] = rand() % MAXINT;
		b[i] = a[i];
	}
}

long long int partitionFunction(long long int *a, long long int l, long long int h)
{
	c += 3;
	long long int pivot = a[l];
	long long int i = l;
	long long int j = h;
	while(i < j) {
		do {
			i++;
			c++;
		} while(a[i] <= pivot);
		do {
			j--;
			c++;
		} while(a[j] > pivot);
		if(i < j) {
			swapFunction(&a[i], &a[j]);
		}
	}
	swapFunction(&a[l], &a[j]);
	//prlong long intArray(a);
	return j;
}

void quickSortFunction(long long int *a, long long int l, long long int h)
{
	if(l < h) {
		long long int j = partitionFunction(a, l, h);
		c++;
		quickSortFunction(a, l, j);
		quickSortFunction(a, j + 1, h);
	}
}

void mergeFunction(long long int *x, long long int l, long long int m, long long int r)
{
	long long int n1 = m - l + 1;
	long long int n2 = r - m;

	long long int a[n1];
	long long int b[n2];
	for(long long int i = 0; i < n1; i++) {
		a[i] = x[l + i];
		c++;
	}
	for(long long int j = 0; j < n2; j++) {
		b[j] = x[m + 1 + j];
		c++;
	}
	long long int i = 0, j = 0, k = l;
	while(i < n1 && j < n2) {
		if(a[i] < b[j]) {
			x[k++] = a[i++];
			c++;
		}
		else {
			x[k++] = b[j++];
			c++;
		}
	}
	for(; i < n1; i++) {
		x[k++] = a[i];
		c++;
	}
	for(; j < n2; j++) {
		x[k++] = b[j];
		c++;
	}
	c += 7;
}

void mergeSortFunction(long long int *a, long long int l, long long int h)
{
	if(l < h) {
		long long int mid = (l + h) / 2;
		c++;
		mergeSortFunction(a, l, mid);
		mergeSortFunction(a, mid + 1, h);
		mergeFunction(a, l, mid, h);
	}
}

void printArray(long long int *a, long long int n)
{
	cout << endl;
	for(long long int i = 0; i < n; i++) {
		cout << a[i] << "\t";
	}
	cout << endl;
}

void swapFunction(long long int *x,  long long int *y)
{
	 long long int temp = *x;
	*x = *y;
	*y = temp;
	c++;
}
