#include <iostream>
#include <ctime>
#include <cstdlib>
#include <fstream>
using namespace std;

int part(int l, int h);
void quickSort(int l, int h);
void swapValues(int *a, int *b);

int count;
int n = 100000;
int p, i, j, pivot;
int a[100000];
int l = 0;
int h = n - 1;
int temp;
int main()
{
	ofstream of, of2;
	of.open("output of quicksort.txt");
	of2.open("operation counts.txt");
	for(int i = l; i < n; i++){
		a[i] = rand() % 100000 + 1;
	}
	count = 0;
	quickSort(0, 10000);
	of2 << "no. of array elements: 10000\n";
	of2 << "no. of operations: " << count << endl;
	of2 << endl << endl;
	for(int i = l; i < n; i++){
		a[i] = rand() % 100000 + 1;
	}
	count = 0;
	quickSort(0, 20000);
	of2 << "no. of array elements: 20000\n";
	of2 << "no. of operations: " << count << endl;
	of2 << endl << endl;
	for(int i = l; i < n; i++){
		a[i] = rand() % 100000 + 1;
	}
	count = 0;
	quickSort(0, 30000);
	of2 << "no. of array elements: 30000\n";
	of2 << "no. of operations: " << count << endl;
	of2 << endl << endl;
	for(int i = l; i < n; i++){
		a[i] = rand() % 100000 + 1;
	}
	count = 0;
	quickSort(0, 40000);
	of2 << "no. of array elements: 40000\n";
	of2 << "no. of operations: " << count << endl;
	of2 << endl << endl;
	for(int i = l; i < n; i++){
		a[i] = rand() % 100000 + 1;
	}
	count = 0;
	quickSort(0, 50000);
	of2 << "no. of array elements: 50000\n";
	of2 << "no. of operations: " << count << endl;
	of2 << endl << endl;
	for(int i = l; i < n; i++){
		a[i] = rand() % 100000 + 1;
	}
	count = 0;
	quickSort(0, 60000);
	of2 << "no. of array elements: 60000\n";
	of2 << "no. of operations: " << count << endl;
	of2 << endl << endl;
	for(int i = l; i < n; i++){
		a[i] = rand() % 100000 + 1;
	}
	count = 0;
	quickSort(0, 70000);
	of2 << "no. of array elements: 70000\n";
	of2 << "no. of operations: " << count << endl;
	of2 << endl << endl;
	for(int i = l; i < n; i++){
		a[i] = rand() % 100000 + 1;
	}
	count = 0;
	quickSort(0, 80000);
	of2 << "no. of array elements: 80000\n";
	of2 << "no. of operations: " << count << endl;
	of2 << endl << endl;
	for(int i = l; i < n; i++){
		a[i] = rand() % 100000 + 1;
	}
	count = 0;
	quickSort(0, 90000);
	of2 << "no. of array elements: 90000\n";
	of2 << "no. of operations: " << count << endl;
	of2 << endl << endl;
	for(int i = l; i < n; i++){
		a[i] = rand() % 100000 + 1;
	}
	count = 0;
	quickSort(0, 100000);
	of2 << "no. of array elements: 100000\n";
	of2 << "no. of operations: " << count << endl;
	of2 << endl << endl;
	for(int i = l; i < h + 1; i++){
		of << a[i] << " ";
	}
}
int part(int l, int h)
{
	count++;
	pivot = a[l];
	i = l;
	j = h;
	do{
		do{
			count++;
			i++;
		} while(a[i] < pivot);
		do{
			count++;
			j--;
		}while(a[j] > pivot);
		if(i < j){
			swapValues(&a[i], &a[j]);
		}
		count++;
	}while(i < j);
	swapValues(&a[l], &a[j]);
	count++;
	return j;
}

void quickSort(int l, int h)
{
	if(l < h){
		count++;
		p = part(l, h + 1);
		quickSort(l, p - 1);
		quickSort(p + 1, h);
	}
}

void swapValues(int *a, int *b)
{
	count += 3;
	int t;
	t = *a;
	*a = *b;
	*b = t;
}
