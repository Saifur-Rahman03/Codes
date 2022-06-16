//all i need to do is find the squares of primes..
#include <iostream>
#include <vector>
#include <set>
#include <algorithm> //for find function
using namespace std;

int main()
{
	long long int i, j, n;
	cin >> n;
	long long int a[n];
	long long int m = 1000001;
	set<long long int> tp;
	vector<bool> primes(m, true);
	for(i = 0; i < n; i++){
		cin >> a[i];
	}
/*	for(i = 0; i < n; i++){
		cout << a[i];
	}
*/
	long long int result[n];

	//seive of eratosthenes:
	primes[0] = primes[1] =false;
	for(i = 2; i * i <= m; i++){
		if(primes[i]){
			for(j = i; j * i <= m; j++){
				primes[i * j] = false;
			}
		}
	}

/*	for(i = 0; i <= m; i++){
		cout << primes[i] << " ";
	}
*/

	//adding all t-primes:
	for(i = 2; i <= m; i++){
		if(primes[i]){
			tp.insert(i * i);
		}
	}

	for(i = 0; i < n; i++){
		//cout << a[i] << endl;
		if(tp.find(a[i]) != tp.end()){
		//	cout << "in\n";
			result[i] = 1;
		}
		else{
		//	cout << "out\n";
			result[i] = 0;
		}
	}


	for(i = 0; i < n; i++){
		if(result[i] == 1)
			cout << "YES" << endl;
		else
			cout << "NO" << endl;
	}
}
