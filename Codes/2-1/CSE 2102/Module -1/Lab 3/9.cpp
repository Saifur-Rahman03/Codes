#include <iostream>
using namespace std;
int e(int n);
int o(int n);
int main()
{
	int n, n0;
	cout << "Enter an integer: ";
	cin >> n0;
	n = n0;
	while(1){
		if(n % 2 == 0){
			cout <<  "T(" << n << ") = " << e(n) << endl;
			n = e(n);
		}
		else{
			//o(n);
			cout <<  "T(" << n << ") = " << o(n) << endl;
			n = o(n);
		}
	if(n == 1)
		break;
	}

	return 0;
}
int e(int n)
{
	return (n / 2);
}
int o(int n)
{
	return (3 * n + 1);
}
