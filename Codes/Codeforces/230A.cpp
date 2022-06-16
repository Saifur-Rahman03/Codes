#include <bits/stdc++.h>
using namespace std;
class S
{
public:
	int a, b;
};
void bubble_sort(S *a, int n);

int main()
{
	int s, n, flag = 0;
	cin >> s >> n;
	S arr[n];
	int i, j, x, y;
	for(i = 0; i < n; i++){
		cin >> x >> y;
		arr[i].a = x;
		arr[i].b = y;
	}
/*	for(i = 0; i < n; i++){
		cout << arr[i].a << " " << arr[i].b << endl;
	}
*/
	bubble_sort(arr, n);
/*	for(i = 0; i < n; i++){
		cout << arr[i].a << " " << arr[i].b << endl;
	}
*/
	for(i = 0; i < n; i++){
		if(s > arr[i].a){
			s += arr[i].b;
			flag = 1;
		}
		else{
			flag = 0;
			break;
		}
	}

	if(flag == 1)
		cout << "YES" << endl;
	else
		cout << "NO" << endl;

}
void bubble_sort(S *a, int n){
	int i, j;
	S t;
	for(i = 0; i < n - 1; i++){
		for(j = 0; j < n - 1 - i; j++){
			if(a[j].a > a[j + 1].a){
				t = a[j];
				a[j] = a[j + 1];
				a[j + 1] = t;
		}
	}
}

}
