#include <bits/stdc++.h>
using namespace std;

int main()
{
	int t, n, i;
	cin >> t;
	while(t--){
		cin >> n;
		int a[2 * n];
		int b[2 * n];
		for(i = 0; i < 2 * n; i++)
			b[i] = -1;
		vector <int> v;
		vector <int> :: iterator it;
		for(i = 0; i < 2 * n; i++)
			cin >> a[i];
		for(i = 0; i < 2 * n; i++){
			if(b[a[i]] != -1){
				continue;
			}
			v.push_back(a[i]);
			b[a[i]] = 1;
		}
		for(it = v.begin(); it != v.end(); it++){
			cout << *it << " ";
		}
		cout << endl;
	}
}
