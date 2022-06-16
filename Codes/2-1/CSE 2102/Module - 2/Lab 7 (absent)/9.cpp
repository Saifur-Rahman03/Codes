#include<iostream>
#include<cmath>
using namespace std;
void GL();
void M();
int main()
{
	GL();
	M();
	return 0;
}
void GL()
{
	double s = 0, d, i;
	for(i = 0; i <= 10000; i++){
		d = pow(-1, i) / (2 * i + 1);
		s+= d;
	}
	s *= 4;
	cout << "Gregory-Leibniz series, PI = " << s << endl;
}
void M()
{
	double s1 = 0, s2 = 0, k=1, d1, d2, a = 1.0 / 5.0, b = 1.0 / 239.0, pi;
	int i;
	for(i = 1; i <= 10000; i++){
		d1 = pow(a,k) / k;
		d2 = pow(b,k) / k;
	if(i%2==1){
		s1 += d1;
		s2 += d2;
		}
        else{
		s1 -= d1;
		s2 -= d2;
		}
        k += 2;
	}
	pi = 16 * s1 - 4 * s2;
	cout << "Machine's formula, PI = " << pi << endl;
}
