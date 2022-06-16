#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	long int i, x1, x2;
	cout << "Enter Range: \n";
	cout << "from: ";
	cin >> x1;
	cout << "to: ";
	cin >> x2;
	cout << "\n|_2x_| = |_x_| |_x+1/2_| -this statement is ";
	for (i = x1; i <= x2; i++) {
		if ( floor(2 * i) != floor(i)+floor( i + 1 / 2)) {
			cout << "false.\n";
			return 0;
		}
	}
	cout << "true.\n";
	return 0;
}
