#include <iostream>
using namespace std;

int main()
{
	int a[100];
	int i, j, n, l, x, m, flag = 0, k = 0, count = 0;

	cout << "Enter no. of array elements: ";
	cin >> n;
	cout << endl;
	cout << "Enter array elements:\n";
	for(i = 0; i < n; i++)
		cin >> a[i];
	cout << "\nEnter the delete element: ";
	cin >> x;
	m = n;
	for(i = 0; i < n; i++)
		if(a[i] == x)
			count++;
	while(count){
		for(i = k; i < m; i++)
			if(a[i] == x){
				flag = 1;
				break;
			}
			l = i;
		if(flag == 0)
			return 0;
		for(j = l; j < n; j++){
			a[j] = a[j+1];
		}
		n--;
		k = l;
		count --;
		}
	cout << "\nNew Array\n";
	for(i = 0; i < n; i++)
		cout << a[i] << ' ';
	cout << endl;

	return 0;
}
