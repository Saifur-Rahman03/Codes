#include <bits/stdc++.h>

using namespace std;

int main()
{
	int t, flag;
	long long int n;

	cin >> t;
	while(t--) {
		flag = 0;
		cin >> n;
		if(n % 2 != 0) {
			flag = 1;
		}
		else {
			long long int div = n;
			while(1){
				div = div / 2;
				if(div % 2 == 0) {
					continue;
				}
				else if(div % 2 != 0 && div > 1) {
					flag = 1;
				}
				break;
			}
		}
		if(flag == 1) {
			cout << "YES" << endl;
		}
		else {
			cout << "NO" << endl;
		}
	}
}
