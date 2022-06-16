#include <bits/stdc++.h>
#define MAX 18446744073709
using namespace std;

int main()
{
	unsigned long long int n, f1, f2, fib;
	int i;
	double sum = 0.0;
	cin >> n;
	vector <double> v;
	vector<double> :: iterator it;

	if(n <= 1)
		return n;
	else{
		f1 = 0;
		f2 = 1;
		for(i = 2; i <= n; i++){
			fib = f1 + f2;
			f1 = f2;
			f2 = fib;
			if(f1 > MAX || f2 > MAX){
				cout << "ended at " << i << endl;
				break;
			}
//			cout << f1 << "  " << f2 << endl;
			v.push_back((1.0 * f2) / f1);
		}
	}

	cout << "golden ratio: " << v[v.size() - 1] << " : 1"<< endl;
	for(it = v.begin(); it != v.end(); it++){
		//cout << *it << " ";
		//cout << endl;
	}
	cout << endl;
}
