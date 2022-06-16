//t_primes are the square of prime numbers

#include <bits/stdc++.h>

using namespace std;

int main()
{
	long long int i, j, n;
	long long int x;
	long long int m = 1000001;

	vector<bool> primes(1000001, true);
	set<long long int> st;
	primes[0] = primes[1] = false;


	//seive of eratosthenes:     if you don't understand.. do the math
	for(i = 2; i * i <= m; i++){
		if(primes[i]){//true
			for(j = i; j * i <= m; j++){ //all the number which will be divisible because it's multiplying
				primes[i * j] = false;
			}
		}
	}

	//put all the t_prime in a set
	for(i = 2; i <= m; i++){
		if(primes[i]){//true means prime
			st.insert(i * i); //square of prime
		}
	}

	cin >> n;
	while(n--){
		cin >> x;
		if(st.find(x) != st.end()){
			cout << x << " is a T-prime\n";
		}
		else{
			cout << x << " is not a T-prime\n";
		}
	}
	return 0;
}
