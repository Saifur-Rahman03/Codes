#include <iostream>

using namespace std;

int main()
{
	int t;
	cin >> t;
	while(t--) {
		int n;
		cin >> n;
		int a[n];
		for(int i = 0; i < n; i++) {
			cin >> a[i];
		}
		int b[n];
		for(int i = 0, j = 0; i < n / 2 + 1; i ++, j += 2) {
			b[j] = a[i];
		}
		for(int i = n - 1, j = 1; i >= n / 2; i --, j += 2) {
			b[j] = a[i];
		}
		for(int i = 0; i < n; i++) {
			cout << b[i] << " ";
		}
		cout << endl;
	}
}
