#include <iostream>
using namespace std;

int main( )
{
	int a[10000];
	int n, i, big;

	cout << "How many numbers ";
	cin >> n;
	cout << endl;
	cout << "Enter numbers: \n";
	for(i = 0; i < n; i++)
		cin >> a[i];
	big = a[0];
	for(i = 0; i < n; i++)
		if(big < a[i])
			big = a[i];
	cout << "\nbigger number is " << big << endl;

	return 0;

}
