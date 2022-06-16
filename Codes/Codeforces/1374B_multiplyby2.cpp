#include <bits/stdc++.h>

using namespace std;

int main()
{
	long long int t, n, m = 0, b = 0, flag = 1;
	cin >> t;
	while(t--){
		cin >> n;
		m = 0;
//		b = 0;
		flag = 1;
		while(n != 1){
			if(n % 6 == 0){
				n = n / 6;
				//b++;
				m++;
			}
			else	if(n % 6 != 3){
				flag = 0;
				break;
			}
			else{
				n *= 2;
				m++;
			}

		}
		if(flag == 0){
			m = -1;
			cout << m << endl;

		}
		else{
			cout << m << endl;
		}
		}

}
