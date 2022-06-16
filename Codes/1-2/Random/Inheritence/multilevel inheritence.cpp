#include <iostream>
using namespace std;
class B
{
	int a;
public:
	B(int i){a = i; cout << "Constructing B\n";}
	~B(){cout << "Destructing B\n";}
	void show_a(){cout << a << endl;}
};
class D1 : public B
{
	int b;
public:
	D1(int i, int j) : B(j){b = i; cout << "Constructing D1\n";}
	~D1(){cout << "Destructing D1\n";}
	void show_b(){cout << b << endl;}
};
class D2 : public D1
{
	int c;
public:
	D2(int i, int j, int k) : D1(j, k){c = i; cout << "Constructing D2\n";}
	~D2(){cout << "Destructing D2\n";}
	void show_c(){cout << c << endl;}
};
int main()
{
	D2 ob(1, 2, 3);
	ob.show_a();
	ob.show_b();
	ob.show_c();

	return 0;
}
