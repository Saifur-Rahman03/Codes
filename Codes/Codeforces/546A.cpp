#include <iostream>
using namespace std;
int main()
{
	int k, n, w, i;
	int c = 0, l;
	cin >> k >> n >> w;
	for(i = 1; i <= w; i++){
		c += i * k;
	}
	l = c - n;
	if(l < 0)
		cout << "0" << endl;
	else
		cout << l << endl;

	return 0;
}
