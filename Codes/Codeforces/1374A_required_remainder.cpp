#include <bits/stdc++.h>

using namespace std;

int main()
{
	long long int i, t, n, x, y, k = 0, k1;
	cin >> t;
	while(t--){
		cin >> x >> y >> n;
	/*	for(i = 0; i < n; i++){
			if((i % x) == y){
				if(i > k){
					k = i;
				}
			}
		}*/
		k = y;
		k1 = n / x;
//		while(k <= n){
		if((y + (x * (k1))) > n)
			k = y + (x * (k1 - 1));
		else
			k = (y + (x * (k1)));
//		}
//		k -= x;
		cout << k << endl;
	}
	return 0;
}
