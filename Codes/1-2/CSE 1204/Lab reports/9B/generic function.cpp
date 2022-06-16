#include <iostream>
using namespace std ;
template <class X> void swapargs (X &a, X &b)
{
	X temp ;
	temp = a;
	a = b;
	b= temp ;
}
int main ()
{
	int i = 1, j = 2;
	float x = 1, y = 3.3;
	cout << "Original i, j: " << i << ' ' << j << endl ;
	cout << "Original x, y: " << x << ' ' << y << endl ;
	swapargs (i, j);
	swapargs (x, y);
	cout << "Swapped i, j: " << i << ' ' << j << endl ;
	cout << "Swapped x, y: " << x << ' ' << y << endl ;
	return 0;
}
