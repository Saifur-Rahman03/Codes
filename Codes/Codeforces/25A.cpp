#include <iostream>

using namespace std;

int main()
{
	int n, r;
	int even = 0, odd = 0;
	cin >> n;
	int a[n];
	for(int i = 0; i < n; i++)
		cin >> a[i];
	for(int i = 0; i < n; i++){
		if(a[i] % 2 == 0){
			even++;
		}
		else
			odd++;
	}
	if(even > odd){
		for(int i = 0; i < n; i++){
			if(a[i] % 2 != 0){
				r = i + 1;
			}
		}
	}
	else{
		for(int i = 0; i < n; i++){
			if(a[i] % 2 == 0){
				r = i + 1;
			}
		}
	}

	cout << r << endl;
}
