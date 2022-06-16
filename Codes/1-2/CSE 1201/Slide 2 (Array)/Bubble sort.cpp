#include <iostream>
using namespace std;
int n;
void printArray(int *a);
int main( )
{
	int a[100], b[100];
	int i, j, t;

	cout << "Enter the no. of array elements: ";
	cin >> n;
	cout << endl;

	cout << "Enter array elements:\n";
	for(i = 0; i < n; i++)
		cin >> a[i];
	for(i = 0; i < n; i++)
		b[i] = a[i];
	for(i = 0; i < n - 1; i++){
		for(j = 0; j < n - 1 - i; j++){
			cout << "\ni = " << i << '\t' << "j = " << j << '\t' << "a[j] = " << a[j] << " a[j + 1] = " << a[j + 1] << endl;
			if(a[j] > a[j + 1]){
				t = a[j];
				a[j] = a[j + 1];
				a[j + 1] = t;
			}

			printArray(a);
		}
	}
	return 0;
}
void printArray(int *a)
{
	int i;
	cout << endl;
	cout << "Sorted Array\n";
	for(i = 0; i < n; i++)
		cout << a[i] << ' ';
	cout << endl;

}
