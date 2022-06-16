#include <bits/stdc++.h>
using namespace std;

int updatedBinarySearch(long int *a, int l, int h, int x);

int main()
{
	int n, m;
	cin >> n;
	long int a[n];
       for(int i = 0; i < n; i++) {
		cin >> a[i];
       }
       sort(a, a + n);
       cin >> m;
       for(int i = 0; i < m; i++) {
		int j, r;
		cin >> j;
		r = updatedBinarySearch(a, 0, n - 1, j);
		cout << r  << endl;

       }
}

int updatedBinarySearch(long int *a, int l, int h, int x)
{
	int result = -1;
	while(l <= h) {
		int mid = (l + h)/2;
		if(x == a[mid]) {
			result = mid;
			l = mid + 1;
		}
		if(x < a[mid]) {
			h = mid - 1;
		}
		else {
			l = mid + 1;
		}
	}
	if(h < 0) {
		return 0;
	}
	else if(result = -1){
		return l;
	}
	return result + 1;
}
