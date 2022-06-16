#include <iostream>
using namespace std;

int main()
{
	int a, b, c;
	cin >> a >> b >> c;
	int max = 0;
	int res;
	res = a + (b * c);
	if(res > max)
		max = res;
	res = (a + b) * c;
	if(res > max)
		max = res;
	res = (a * b) + c;
	if(res > max)
		max = res;
	res = a * (b + c);
	if(res > max)
		max = res;
	res = a * b * c;
	if(res > max)
		max = res;
	res = a + b + c;
	if(res > max)
		max = res;

	cout << max << endl;
}
