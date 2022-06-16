#include <bits/stdc++.h>

using namespace std;
int main()
{
	int i, j, t;
	long long int a, b, c, c1 = 0, c2 = 0, s1, s2 = 0, r1, r2;
	cin >> t;
	for(i = 0; i < t; i++){
		cin >> a >> b >> c;
		c1 = 0; c2 = 0;
		r1 = -1;
		r2 = -1;
		j = 1;
		s1 = j * a;
		s2 = c;
		if(s1 > s2){
			r2 = j;
		}
		else if(s2 > s1){
			r1 = j;

		}
		j = b;
		s1 = j * a;
		if(s1 > s2){
			r2 = j;
		}
		else if(s2 > s1){
			r1 = j;

		}
		cout << r1 << " " << r2 << endl;
	}
}
