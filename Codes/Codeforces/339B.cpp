#include <iostream>
 using namespace std;

 int main()
 {
	long long int n, m, t = 0, p = 1;
 	cin >> n >> m;
 	long long int i, a[m];
 	for(i = 0; i < m; i++){
		cin >> a[i];
 	}
 /*	for(i = 0; i < m; i++){
		cout << a[i] << " ";
 	}
*/
	for(i = 0; i < m; i++){
		if(p > a[i]){
			t += n - p;
			t += a[i];
			p = a[i];
		}
		else{
			t += a[i] - p;
			p = a[i];
		}
	}
	cout << t << endl;
 }
