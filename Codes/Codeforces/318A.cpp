#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	long long int n, k;
	cin >> n >> k;
	long long int x;

	if(k <= n / 2){
		x = 1 + 2 * (k - 1);
	}
	else{
		k = k - ((double)n / 2);
		if(k == 0){
			cout << n << endl;
			return 0;
		}
		x = 2 * k;
	}

	cout << x << endl;


	return 0;
}
