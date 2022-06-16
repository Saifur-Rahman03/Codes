#include <iostream>
using namespace std;
int p, r, x, i, q;
void QS(int a[], int p, int r);
int partitio (int a[], int p, int r);
int main( )
{
	int n, a[100];
	cout << "How many elements? ";
	cin >> n;
	cout << "\nEnter array elements:\n";
	for(int j = 0; j < n; j++)
		cin >> a[j];
	p = 0;
	r = n - 1;
	QS(a, 0, n - 1);
	cout << "Sorted array elements:\n";
	for(int j = 0; j < n; j++)
		cout << a[j] << " ";
	cout << endl;
}
void QS(int a[], int p, int r)
{
	if(r <= p)
		return;
	q = partitio(a, p, r);
	QS(a, p, q - 1);
	QS(a, q + 1, r);
}
int partitio (int a[], int p, int r)
{
	int t;
	i = p - 1;

	for(int j = p; j < r; j++)
		if(a[j] < a[r]){
			i++;
			t = a[i];
			a[i] = a[j];
			a[j] = t;
		}
		t = a[i + 1];
		a[i + 1] = a[r];
		a[r] = t;

		return i + 1;
}
