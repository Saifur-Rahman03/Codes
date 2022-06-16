#include <iostream>
#include <vector>

using namespace std;

void input(int n, int *a);
void print(int n, int *a);
int partitionFunction(int *a, int l, int h);
void quickSortFunction(int *a, int l, int h);
void swapFunction(int *x,  int *y);
void mergeFunction(int *x, int l, int m, int r);
void mergeSortFunction(int *a, int l, int h);

//Merge sort is more efficient in working with large amount of data than quick sort.



int main()
{
	int n;
	cin >> n;
	vector<int> result;
	int a[n], b[n - 1], c[n - 2];
	input(n, a);
	input(n - 1, b);
	input(n - 2, c);

	/*print(n, a);
	print(n - 1, b);
	print(n - 2, c);
	*/
	/*
	quickSortFunction(a, 0, n);
	quickSortFunction(b, 0, n -1);
	quickSortFunction(c, 0, n - 2);
	*/
	mergeSortFunction(a, 0, n - 1);
	mergeSortFunction(b, 0, n - 2);
	mergeSortFunction(c, 0, n - 3);
	/*
	print(n, a);
	print(n - 1, b);
	print(n - 2, c);
	*/
	for(int i = 0; i < n; i++) {
		if(a[i] != b[i]){
			result.push_back(a[i]);
			break;
		}
	}
	for(int i = 0; i < n - 1; i++) {
		if(b[i] != c[i]){
			result.push_back(b[i]);
			break;
		}
	}
	vector<int>:: iterator it;
	for(it = result.begin(); it < result.end(); it++) {
		cout << *it << endl;
	}
}

void input(int n, int *a)
{
	for(int i = 0; i < n; i++) {
		cin >> a[i];
	}
}
void print(int n, int *a)
{
	for(int i = 0; i < n; i++) {
		cout << a[i] << " ";
	}
	cout << endl;
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
void swapFunction(int *x,  int *y)
{
	 int temp = *x;
	*x = *y;
	*y = temp;
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
