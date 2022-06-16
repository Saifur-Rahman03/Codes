#include <iostream>
using namespace std;

int main( )
{
	int a[100];
	int i, n, x, m, m1, flag = 0;

	cout << "Enter no. of array elements: ";
	cin >> n;
	cout << endl;
	cout << "Enter array elements:\n";
	for(i = 0; i < n; i++)
		cin >> a[i];

	cout << "Enter the specific element: ";
	cin >> m1;
	for(i = 0; i < n; i++)
		if(a[i] == m1){
			flag = 1;
			break;
		}
	if(flag == 1)
		m = ++i;
	else
		cout << "\nNot found\n";
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
