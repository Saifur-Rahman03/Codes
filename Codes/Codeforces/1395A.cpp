#include <iostream>
using namespace std;

int main()
{
	int t;
	cin >> t;
	int even = 0, odd = 0, zero = 0, flag = 1;
	long long int r, g, b, w;
	while(t--)
	{
		even == 0; zero = 0; odd = 0, flag = 1;
		cin >> r >> g >> b >> w;
			if(r == 0)
				zero++;
			if(b == 0)
				zero++;
			if(g == 0)
				zero++;
			if(r != 0 && r % 2 != 0){
				odd++;
			}
			else if(r != 0){
				even++;
			}
			if(g != 0 && g % 2 != 0){
				odd++;
			}
			else if(r != 0){
				even++;
			}
			if(b != 0 && b % 2 != 0){
				odd++;
			}
			else if(r != 0){
				even++;
			}
			if(w != 0 && b % 2 != 0){
				odd++;
			}
			else if(r != 0){
				even++;
			}
			if(zero == 1 && odd == 3){
				flag = 0;
			}
			else if(zero == 2 && odd == 2)
				flag = 0;
		//cout << odd << " " << even << endl;

		if(flag == 1)
			cout << "Yes" << endl;
		else
			cout << "No" << endl;


	}
}
