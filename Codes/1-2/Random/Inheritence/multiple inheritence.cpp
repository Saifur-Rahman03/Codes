#include <iostream>
using namespace std;
class B1
{
	int a;
public:
	B1(int i){a = i; cout << "Constructing B1\n";}
	~B1(){cout << "Destructing B1\n";}
	void show_a(){cout << a << endl;}
};
class B2
{
	int b;
public:
	B2(int i){b = i; cout << "Constructing B2\n";}
	~B2(){cout << "Destructing B2\n";}
	void show_b(){cout << b << endl;}
};
class D : public B1, public B2
{
	int c;
public:
	D(int i, int j, int k) : B1(k), B2(j){c = i; cout << "Constructing D\n";}
	~D(){cout << "Destructing D\n";}
	void show_c(){cout << c << endl;}
};
int main()
{
	D ob(1, 2, 3);
	ob.show_a();
	ob.show_b();
	ob.show_c();

	return 0;
}

