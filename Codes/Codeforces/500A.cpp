#include <bits/stdc++.h>
typedef long long ln;
using namespace std;

int main()
{
	ln n, t, i, flag = 0;
	cin >> n >> t;
	ln a[n];
	a[0] = 0;
	for(i = 1; i < n; i++)
		cin >> a[i];
	i = 1;
	while(1){
		if(i > t)
			break;
		else if((i + a[i]) == t){
			flag = 1;
			break;
		}
		else{
			i = i + a[i];
		}
	}
	if(flag == 1)
		cout << "YES" << endl;
	else
		cout << "NO" << endl;

}
