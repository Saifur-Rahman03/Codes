#include <bits/stdc++.h>

using namespace std;
void func(int a, int b, int c);
int h = 0;
int main()
{
	int a, b, c;
	cin >> a >> b;
	h = a;
	c = 0;
	while(1){
		c += a % b;
		a /= b;
		h += a;
		if(a < b){
			break;
		}
	}
	a = a + c;
	c = 0;
	while(1){
		c += a % b;
		a /= b;
		h += a;
		if(a < b){
			if(a + c >= b){
				h += (a + c) / b;
			}
			break;
		}
	}
//	cout << a << endl;
//	cout << c << endl;
	cout << h << endl;
}
void func(int a, int b, int c)
{


}
