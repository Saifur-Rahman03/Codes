#include <bits/stdc++.h>

using namespace std;

int main()
{
	int n, m;
	int dif, Min;
	cin >> n >> m;
	int f[m];

	for(int i = 0; i < m; i++)
		cin >> f[i];

	sort(f, f + m);
	Min = f[m - 1];
	for(int i = n - 1; i < m; i++){
		dif = f[i] - f[i - n + 1];
		if(dif < Min && dif >= 0)
			Min = dif;
	}
	cout << Min << endl;
}
