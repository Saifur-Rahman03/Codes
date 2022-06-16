#include <iostream>
using namespace std;
int myfunc(int a);
int myfunc(int a, int b);
int main()
{
	int (*fp1)(int a);
	int (*fp2)(int a, int b);
	fp1 = myfunc;
	fp2 = myfunc;
	cout << fp1(5) << endl;
	cout << fp2(5, 10) << endl;
	return 0;
}
int myfunc(int a)
{
	return a;
}
int myfunc(int a, int b)
{
	return a*b;
}
