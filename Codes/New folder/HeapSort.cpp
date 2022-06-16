#include <iostream>

using namespace std;

void heapSort(int a[], int n, int i);
void heapify(int a[], int n, int i);


int main()
{
	int n, i;
	cin >> n;
	int a[n];
	cout << "Enter Array: " << endl;

	for(i = 0; i < n; i++)
		cin >> a[i];

	heapSort(a, n, 0);

	cout << "sorted array: " << endl;
	for(int i = 0; i < n; i++){
		cout << a[i] << " ";
	}
	cout << endl;
}

void heapify(int a[], int n, int i)
{
	int largest = i;
	int l = 2 * i + 1;
	int r = 2 * i + 2;

	if(l < n && a[largest] < a[l])
		largest = l;
	if(r < n && a[largest] < a[r])
		largest = r;

	if(largest != i){
		swap(a[i], a[largest]);
		heapify(a, n, largest);
	}
}
void heapSort(int a[], int n, int i)
{
	for(int i = n / 2 - 1; i >= 0; i --){
		heapify(a, n, i);
	}

	for(int i = n - 1; i >= 0; i --){
		swap(a[0], a[i]);
		heapify(a, i, 0);
	}
}
