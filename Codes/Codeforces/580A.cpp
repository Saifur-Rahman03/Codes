#include <iostream>
using namespace std;

int main()
{
	int i, n, c = 1, c1 = 0;
	cin >> n;
	int a[n];
	for(i = 0; i < n; i++)
		cin >> a[i];

	for(i = 0; i < n - 1; i++){
		if(a[i] <= a[i + 1]){
			c++;
		}
		else
		{
			if(c > c1)
				c1 = c;
			c = 1;
		}
	}
	if(c > c1)
		c1 = c;
	cout << c1 << endl;

	return 0;
}
