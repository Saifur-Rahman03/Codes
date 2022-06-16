#include <bits/stdc++.h>

using namespace std;
int main()
{
	int n, m, a , b;
	cin >> n >> m >> a >> b;
	int r = 0;
	int r1 = n * a;
	if(m > n){
		r = b;
	}
	else if(n % m == 0){
		r = (n / m) * b;
	}
	else{
		if(a > b){
			r = ((n / m) * b) + b;
		}
		else
			r = ((n / m) * b) + (n % m) * a;
	}


	cout << min(r, r1) << endl;
}
