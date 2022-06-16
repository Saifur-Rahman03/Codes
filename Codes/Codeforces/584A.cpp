#include <iostream>

using namespace std;

int main()
{
	int n, t, result;
	cin >> n >> t;
	if(n == 1 && t == 10) {
		cout << -1 << endl;
		return 0;
	}
	if(t < 10) {
		for(int i = 0; i < n; i++) {
			cout << t;
		}
	}
	else {
		cout << 1;
		for(int i = 0; i < n - 1; i++) {
			cout << 0;
		}
	}
	cout << endl;
}
