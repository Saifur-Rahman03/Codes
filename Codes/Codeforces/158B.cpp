#include <iostream>
#include <math.h>
using namespace std;
int main()
{
	int a[100001], n, i;
	long int n1, n2, n3, n4;
	long int taxi = 0;
	n1 = n2 = n3 = n4 = 0;
	cin >> n;
	for(i = 0; i < n; i ++){
		cin >> a[i];
		if(a[i] ==  4)
			n4++;
		if(a[i] ==  3)
			n3++;
		if(a[i] ==  2)
			n2++;
		if(a[i] ==  1)
			n1++;
	}
	taxi = n4;

	if(n3 == n1){
		taxi += n3;
		n3 = 0;
		n1 = 0;
	}
	else if(n3 > n1){
		taxi += n3 - n1;
		taxi += n1;
		n1 = 0;

	}
	else if((n3 < n1) && (n3 != 0)){
			taxi += n3;
			n1 -= n3;
	}
	if(n2 % 2 == 0)
		taxi += n2 /2;
	else if((n2 % 2) == 1){
		taxi += (n2 / 2);
		if(n1 > 1){
			taxi++;
			n1 -= 2;
		}
	else if(n1 == 1){
		taxi++;
		n1 --;
	}
	else if(n1 == 0)
	{
		taxi++;
	}
	}
	if((n1 <= 4) && (n1 != 0))
		taxi++;
	else if(n1 > 4){
			if(n1 % 4 == 0)
				taxi += (n1 / 4);
			else {
				taxi += (n1 / 4);
				if((n1 % 4) > 0)
				taxi++;
			}
		}

	cout << taxi << endl;
}

