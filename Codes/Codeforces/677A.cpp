#include <iostream>
using namespace std;

int main()
{
	int i, l, h, r = 0;


	cin >> l >> h;
	int a[l];

	for(i = 0; i < l; i++){
		cin >> a[i];
		if(a[i] > h)
			r += 2;
		else
			r++;

	}
	cout << r << endl;


}
