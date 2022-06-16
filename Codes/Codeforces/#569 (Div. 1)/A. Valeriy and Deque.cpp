#include <iostream>
using namespace std;
int main()
{
	int i, n, q, j, k;
	int A, B, temp;
	cin >> n;
	int a[n + 1];
	cin >> q;
	int m[q + 1];
	for(i = 0; i < n; i++)
		cin >> a[i];
		A = a[i];
		B = a[i + 1];
	while(q){
		k = 0;
		cin >> m[k];
	for(i = 0; i < m[k]; i ++){
		if(A > B){
			temp = a[n - 1];
			a[n - 1] = B;
			for(j = i + 1; j < n; j++){
				a[j] = a[j + 1];
			}
		}
		else{
			temp = a[i];
			a[i] = a[i + 1];
			for(j = i + 1; j < n; j++){
				a[j] = a[j + 1];
			}
			a[n - 1] = temp;
		}
		A = a[i];
		B = a[i + 1];
		k++;
	}
	q--;
	}
	for(i = 0; i < n; i++)
		cout << a[i];
	cout << A << " " << B;
}
