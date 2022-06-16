#include <iostream>
#include <fstream>
#include <random>

using namespace std;

int n = 10;
long long int count = 0;
void mergeFunction(int *x, int l, int m, int r);
void mergeSortFunction(int *a, int l, int h);
void printArray(int *a);
void generateRandomFunction(int *a, int range);

int main()
{
	/*ifstream fin;
	fin.open("QuickSort Input.txt");
	fin >> n;
	int a[n];
	for(int i = 0; i < n; i++) {
		fin >> a[i];
	}
	printArray(a);
	mergeSortFunction(a, 0, n);
	printArray(a);
	*/
	while(1) {
		int a[10 * n + 1];
		generateRandomFunction(a, 10 * n);
		mergeSortFunction(a, 0, 10 * n);
		cout << "no of data: " << n << "\tno of swaps: " << count << endl;
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

void mergeFunction(int *x, int l, int m, int r)
{
	int n1 = m - l + 1;
	int n2 = r - m;

	int a[n1];
	int b[n2];
	for(int i = 0; i < n1; i++) {
		a[i] = x[l + i];
		count++;
	}
	for(int j = 0; j < n2; j++) {
		b[j] = x[m + 1 + j];
		count++;
	}
	int i = 0, j = 0, k = l;
	while(i < n1 && j < n2) {
		if(a[i] < b[j]) {
			x[k++] = a[i++];
			count++;
		}
		else {
			x[k++] = b[j++];
			count++;
		}
	}
	for(; i < n1; i++) {
		x[k++] = a[i];
		count++;
	}
	for(; j < n2; j++) {
		x[k++] = b[j];
		count++;
	}
	count += 7;
}

void mergeSortFunction(int *a, int l, int h)
{
	if(l < h) {
		int mid = (l + h) / 2;
		count++;
		mergeSortFunction(a, l, mid);
		mergeSortFunction(a, mid + 1, h);
		mergeFunction(a, l, mid, h);
	}
}

void generateRandomFunction(int *a, int range)
{
	//srand(time(0));
	for(int i = 0; i < range; i++) {
		a[i] = rand() % 100000;
	}
	//a[range + 1] = MAXINT;
}

void printArray(int *a)
{
	for(int i = 0; i < n; i++) {
		cout << a[i] << " ";
	}
	cout << endl;
}
