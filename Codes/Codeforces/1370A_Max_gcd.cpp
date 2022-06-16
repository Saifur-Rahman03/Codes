#include <bits/stdc++.h>
using namespace std;
int gcd(int a, int b);
int main()
{
	int i, t, n, g;
	cin >> t;

	for(i = 1; i <= t; i++){
		cin >> n;
		g = 1;
		if(n % 2 == 0){
			g = gcd(n / 2, n);
		}
		else{
			for(int j = 1; j < n - 1	; j++){
				g = gcd((n - 1) / 2, n - 1);
			}

		}
		cout << g << endl;

	}
}




int gcd(int a, int b)
{
	if(a == 0)
		return a;
	if(b == 0)
		return b;
	if(a == b)
		return a;
	if(a > b)
		return gcd(a - b, b);
	return gcd(a, b - a);
}
