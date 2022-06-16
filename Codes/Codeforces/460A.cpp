#include <iostream>
using namespace std;

int main()
{
	int n, m, x = 1, y, d;
	cin >> n >> m;

	d = n / m;
	n += d;
	x = n / m;

	while(1) {
		if((x - d) == 0) {
			break;
		}
		n += (x - d);
		d = x;
		x = n / m;
	}
	cout << n << endl;
}
