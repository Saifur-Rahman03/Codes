#include <iostream>
using namespace std;

int main()
{
	int a[100];
	int i, n, x, flag = 0;

	cout << "Enter no. of array elements: ";
	cin >> n;
	cout << endl;
	cout << "Enter array elements:\n";
	for(i = 0; i < n; i++)
		cin >> a[i];
	cout << "\nEnter the search element: ";
	cin >> x;

	for(i = 0; i < n; i++)
		if(a[i] == x){
			flag = 1;
			break;
		}
	if(flag == 1)
		cout << x << " is at " << i + 1 << "th position\n";
	else
		cout << "\nNot found\n";

	return 0;
}
