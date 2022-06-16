#include <bits/stdc++.h>
#include <iostream>
#include <cstdlib>
#include <iomanip>
using namespace std;

//int part(long int *a, int l, int h);
//void quickSort(long int *a, int l, int h);
//void swapValues(long int *a, long int *b);

int main()
{
	long int i, n, l;
	cin >> n >> l;
	long int a[n];
	for(i = 0; i < n; i++)
		cin >> a[i];
	int dis = 0, f_dis, l_dis;

//	quickSort(a, 0, n + 1);
	sort(a, a + n);
//	for(i = 0; i < n; i++)
//		cout << a[i] << " ";
//	cout << endl;
	f_dis = a[0];
	l_dis = l - a[n - 1];

//	cout << f_dis << " " << l_dis << endl;

	for(int i = 1; i < n; i++) {
		if(a[i] - a[i - 1] > dis)
			dis = a[i] - a[i - 1];
	}
	//cout << dis << endl;
	double d = (1.0 * dis) / 2;

	if(f_dis > l_dis){
		if(a[0] != 0 && f_dis > d)
			d = f_dis;
	}
	else{
		if(a[n - 1] != l && l_dis > d)
			d = l_dis;
	}

//	else if(a[0] == 0 && a[n - 1] == n - 1)
//		d = d;
	//cout << dis << endl;
	cout << fixed << setprecision(10) << d << endl;
}
/*int part(long int *a, int l, int h)
{
	long int pivot = a[l];
	int i = l;
	int j = h;
	while(i < j){
		do{
			i++;
			cout << i << endl;
		}while(a[i] <= pivot);
		do{
			j--;
		}while(a[j] > pivot);
		if(i < j){
			swapValues(&a[i], &a[j]);
		}
	}
	swapValues(&a[l], &a[j]);
	return j;
}

void quickSort(long int *a, int l, int h)
{
	long int p;
	if(l < h){
		p = part(a, l, h + 1);
		quickSort(a, l, p - 1);
		quickSort(a, p + 1, h);
	}
}

void swapValues(long int *a, long int *b)
{
	long int t;
	t = *a;
	*a = *b;
	*b = t;
}
*/
