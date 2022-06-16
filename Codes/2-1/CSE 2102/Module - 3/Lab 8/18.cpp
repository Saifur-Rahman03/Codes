#include <iostream>
#include <cmath>
using namespace std;
void checkPrime(int n);
int func(int n){return ((n * n) +1);};
int prime[] = {2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47, 53, 59, 61, 67, 71, 73, 79, 83, 89, 97, 101};
int main()
{
	int n;
	cout << "Enter an positive integer: ";
	cin >> n;
	cout << "f(n) = n^2 + 1\n" << "f(" << n << ") = " << func(n) << endl;
	checkPrime(func(n));
	return 0;
}
void checkPrime(int n)
{
	int i, flag = 1;
	if(n == 1){
		cout << n << " is not a prime\n";
		return;
	}
	for(i = 0; ; i++){
		if(n == prime[i]){
			flag = 1;
			break;
		}
		if(prime[i] > sqrt(n))
			break;
		else if(n % prime[i] == 0){
			flag = 0;
			break;
		}
		else
			flag = 1;
	}
	if(flag ==  1)
		cout << n << " is a prime\n";
	else
		cout << n << " is not a prime\n";

}

