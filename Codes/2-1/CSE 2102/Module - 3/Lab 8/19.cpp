#include <iostream>
#include <cmath>
using namespace std;
bool checkPrime(int n);
bool twinPrime(int n);
int prime[] = {2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47, 53, 59, 61, 67, 71, 73, 79, 83, 89, 97, 101};
int main()
{
	int n;
	cout << "Enter an positive integer: ";
	cin >> n;
	if(checkPrime(n) == 1){
		if(twinPrime(n) == 1)
			cout << n << " and " << n + 2 << " are twin primes.\n";
		else
			cout << n << " and " << n + 2 << " are not twin primes.\n";
	}
	else
		cout << n << " is not a prime.\n";

	return 0;
}
bool checkPrime(int n)
{
	int i, flag = 1;
	if(n == 1)
		return 0;
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
		return 1;
	else
		return 0;
}
bool twinPrime(int n)
{
	if(checkPrime(n + 2) == 1)
		return 1;
	else
		return 0;

}
