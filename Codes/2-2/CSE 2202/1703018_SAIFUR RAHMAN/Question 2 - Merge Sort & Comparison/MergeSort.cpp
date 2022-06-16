#include <bits/stdc++.h>
#include <chrono>

using namespace std;
using namespace std::chrono;

void mergeFunction(int *x, int l, int m, int r);
void mergeSortFunction(int *a, int l, int h);
void printArray(int *a, int n);
void generateRandomFunction(int *a, int range);

int main()
{
	ifstream fin;
	fin.open("quick.txt");
	while(!fin.eof()) {
		int n;
		fin >> n;
		int a[n];
		generateRandomFunction(a, n);
		auto t1 = chrono::high_resolution_clock::now();
		ios_base::sync_with_stdio(false);
		mergeSortFunction(a, 0, n);
		auto t2 = chrono::high_resolution_clock::now();
		double time_taken = chrono::duration_cast<chrono::microseconds>(t2 - t1).count();
		cout << " no of elements: "<< n << "\tTime taken by function: "
			<< time_taken  << " microseconds" << endl;
	}
	return 0;
}

void mergeFunction(int *x, int l, int m, int r)
{
	int n1 = m - l + 1;
	int n2 = r - m;

	int a[n1];
	int b[n2];
	for(int i = 0; i < n1; i++) {
		a[i] = x[l + i];
	}
	for(int j = 0; j < n2; j++) {
		b[j] = x[m + 1 + j];
	}
	int i = 0, j = 0, k = l;
	while(i < n1 && j < n2) {
		if(a[i] < b[j]) {
			x[k++] = a[i++];
		}
		else {
			x[k++] = b[j++];
		}
	}
	for(; i < n1; i++) {
		x[k++] = a[i];
	}
	for(; j < n2; j++) {
		x[k++] = b[j];

	}
}

void mergeSortFunction(int *a, int l, int h)
{
	if(l < h) {
		int mid = (l + h) / 2;
		mergeSortFunction(a, l, mid);
		mergeSortFunction(a, mid + 1, h);
		mergeFunction(a, l, mid, h);
	}
}

void generateRandomFunction(int *a, int range)
{
	for(int i = 0; i < range; i++) {
		a[i] = rand() % 100000;
	}
}

void printArray(int *a, int n)
{
	for(int i = 0; i < n; i++) {
		cout << a[i] << " ";
	}
	cout << endl;
}
