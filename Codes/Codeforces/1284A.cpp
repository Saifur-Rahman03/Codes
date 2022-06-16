#include <iostream>
#include <string>

using namespace std;
int main()
{
	int n, m, q, y, i, j;
	cin >> n >> m;
	string s[n], t[m], Y;


	for(i = 0; i < n; i++){
		cin >> s[i];
	}
	for(i = 0; i < m; i++){
		cin >> t[i];
	}
	cin >> q;
	for(i = 0; i < q; i++){
		cin >> y;
		cout << s[(y - 1) % n] << t[(y - 1) % m] << endl;
	}


}
