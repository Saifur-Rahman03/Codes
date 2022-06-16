#include <iostream>
using namespace std;

int main()
{
	int a[100];
	int i, j, n, x, flag = 0;

	cout << "Enter no. of array elements: ";
	cin >> n;
	cout << endl;
	cout << "Enter array elements:\n";
	for(i = 0; i < n; i++)
		cin >> a[i];
	cout << "\nEnter the delete element: ";
	cin >> x;

	for(i = 0; i < n; i++)
		if(a[i] == x){
			flag = 1;
			break;
		}
	if(flag == 0)
		return 0;
	for(j = i; j < n; j++)
		a[j] = a[j+1];

	cout << "\nNew Array\n";
	for(i = 0; i < n - 1; i++)
		cout << a[i] << ' ';
	cout << endl;

	return 0;
}
