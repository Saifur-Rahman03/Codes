#include <bits/stdc++.h>

using namespace std;

int main()
{
	int n, a1, b, c;
	int p = 0;
	cin >> n >> a1 >> b >> c;

	int a[3];
	a[0] = a1;
	a[1] = b;
	a[2] = c;
	sort(a, a + 3);
/*	for(int i = 0; i < 3; i++)
		cout << a[i] << " ";
	cout << endl;
*/
	int p1 = 0, p2 = 0, p3 = 0;
	if(n % a[0] == 0)
		p1 = n / a[0];
	if(n % a[1] == 0)
		p2 = n / a[1];
	if(n % a[2] == 0)
		p3 = n / a[2];


	int i, j, k = 1;
		for(i = 0; i < 3; i++){
			for(j = 0; j < 3; j ++){
				k = 1;
				while((k * a[j]) < n){
					//cout << a[i] << " " << a[j] << " " << k << " " << ((n - (k * a[j])) / a[i]) << endl;
					if(((k * a[j]) + a[i] + a[0]) == n){
						if((k + 2) > p)
							p = k + 2;
						//cout << "in\n";
					}
					if(((k * a[j]) + a[i] + a[1]) == n){
						if((k + 2) > p)
							p = k + 2;
						//cout << "in\n";
					}
					if(((k * a[j]) + a[i] + a[2]) == n){
						if((k + 2) > p)
							p = k + 2;
						//cout << "in\n";
					}

					else if((n - (k * a[j])) % a[i] == 0){
						if((((n - (k * a[j])) / a[i]) + k) > p)
							p = (((n - (k * a[j])) / a[i]) + k);

						//goto print;
					}
					k++;
				}
			}
		}

//	cout << a[i] << " " << a[j] << " " << k << " " << (k * a[j]) << endl;

//	cout << p1 << " " << p2 << " " << p3 << endl;

//	print:

	if(p1 > p)
		p = p1;
	if(p2 > p)
		p = p2;
	if(p3 > p)
		p = p3;
	//if(p == 0)
	if(p == 0 && a1 + b + c == n)
		p = 3;
	else if(p == 0)
		p = n / a[0];

	cout << p << endl;


}
