#include <iostream>
using namespace std;
void getnum(int &a, int &b);
void swapnum(int &a, int &b);
void printnum(int &a, int &b);
int main()
{
	int a = 0, b = 0;
	getnum(a, b);
	swapnum(a, b);
	printnum(a, b);
}
void getnum(int &a, int &b)
{
	cout << "Enter numbers: \n";
	cin >> a;
	cin >> b;
}
void swapnum(int &a, int &b)
{
	int temp;
	temp = a;
	a = b;
	b = temp;
}
void printnum(int &a, int &b)
{
	cout << "Reverse order: " << a << " "<< b << endl;
}
