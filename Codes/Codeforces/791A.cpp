#include <iostream>
using namespace std;

int main()
{
	int p, q;
	int c = 0;

	cin >> p >> q;

	while(p <= q){
		p *= 3;
		q *= 2;
		c++;
	}
	cout << c << endl;

	return 0;
}
