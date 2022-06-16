#include <bits/stdc++.h>

using namespace std;

int main()
{
	int t;
	cin >> t;
	while(t--) {
		int n, x;
		cin >> n;
		for(int i = 2; i < n; i++) {
			if((n % int(pow(2, i) - 1)) == 0) {
				x = n / (pow(2, i) - 1);
				break;
			}
		}
		cout << x << endl;
	}
}
