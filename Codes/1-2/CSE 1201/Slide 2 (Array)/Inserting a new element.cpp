#include <iostream>
using namespace std;

int main()
{
	int a[100];
	int i, n, x, m;

	cout << "Enter no. of array elements: ";
	cin >> n;
	cout << endl;
	cout << "Enter array elements:\n";
	for(i = 0; i < n; i++)
		cin >> a[i];

	cout << "Enter the position: ";
	cin >> m;
	if(m < 0 || m > n){
		cout << "Error position\n";
		return 0;
	}
	for(i = n - 1; i >= m; i--)
	{
		a[i+1] = a[i];
	}
	cout << "Enter the new element: ";
	cin >> x;
	a[m] = x;
	cout << "\nNew Array\n";
	for(i = 0; i < n + 1; i++)
		cout << a[i] << ' ';
	cout << endl;

	return 0;
}
