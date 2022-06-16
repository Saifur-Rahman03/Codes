#include <bits/stdc++.h>
typedef long long int ln;
ln m = 100001;
ln dp[100001] = {0};
ln dp2[100001] = {0};
using namespace std;


int main()
{
	ln n, i, x;
	cin >> n;
	for(i = 0; i < n; i++){
		cin >> x;
		dp[x]++;
	}
	dp2[0] = 0; dp2[1] = dp[1];
	for(i = 2; i < m; i++){
		dp2[i] = max(dp2[i - 1], dp2[i - 2] + i * dp[i]);
	}
	cout << dp2[m - 1] << endl;
}
