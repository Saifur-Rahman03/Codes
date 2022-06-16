#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	int t;
	cin >> t;
	while(t--) {
		int n, x;
		cin >> n >> x;
		int a[n];
		for(int i = 0; i < n; i++) {
			cin >> a[i];
		}
		//for minimal
		int minimal;
		//determine sum of elements
		int sum1 = 0, sum2 = 0;
		for(int i = 0; i < n; i++) {
			if(a[i] % x != 0) {
				sum1 += a[i];
			}
			else {
				sum2 += a[i];
			}

		}
		minimal = ceil((1.0 * sum1) / x) + ceil((1.0 * sum2) / x);
		//for maximal
		int maximal = 0;
		for(int i = 0; i < n; i++) {
			maximal += ceil((1.0 * a[i]) / x);
		}
		cout << minimal << " " << maximal << endl;
	}
	return 0;
}
