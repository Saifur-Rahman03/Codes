#include <iostream>
using namespace std;
int partiTion(int a[], int l, int h);
void quickSort(int a[], int l, int h);
int main()
{
	int n;
	cin >> n;
	int a[n];
	for(int i = 0; i < n; i++)
		cin >> a[i];
	quickSort(a, 0, n);
	for(int i = 0; i < n; i++)
		cout << a[i] << " ";
	cout << endl;
}

int partiTion(int a[], int l, int h)
{
	int pivot = a[l];
	int i = l;
	int j = h;
	while(i < j){
		do{
			i++;
		}while(a[i] <= pivot);
		do{
			j--;
		}while(a[j] > pivot);
		if(i < j)
			swap(a[i], a[j]);
	}
	swap(a[j], a[l]);
	return j;
}

void quickSort(int a[], int l, int h)
{
	if(l < h){
		int p = partiTion(a, l, h);
		quickSort(a, l, p);
		quickSort(a, p + 1, h);
	}
}
