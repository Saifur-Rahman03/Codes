#include <iostream>
using namespace std;

int main()
{
	int t;
	cin >> t;
	while(t--) {
		int x;
		cin >> x;
		if(x <= 9) {
			cout << x << endl;
			continue;
		}
		else if(x > 45) {
			cout << -1 << endl;
			continue;
		}
		else {
			int result = 0;
			int k = 1;
			int flag = 0;
			for(int i = 9; i >= 1; i--) {
				if(x - i >= 0) {
					x -= i;
				}
				else {
					continue;
				}
				result += i * k;
				k *= 10;
				//cout << x << " " << i << " " << endl;
				if(x == 0) {
					flag = 1;
					break;
				}
			}
			if(flag == 1) {
				cout << result << endl;
			}
			else {
				cout << -1 << endl;
			}
		}
	}
}
