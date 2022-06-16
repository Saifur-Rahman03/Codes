#include <iostream>
using namespace std;
inline int cube(int s)
{
	return s*s*s;
}
int main()
{
	int n;
	cout << "Enter a side of cube: ";
	cin >> n;
	cout << endl;
	cout << "The cube of " << n <<" is: " << cube(n) << endl;
	return 0;
}
