#include <iostream>
using namespace std;
class B
{
protected:
	int a, b;
public:
	int c;
	void set_a(int i){a = i;}
	void set_b(int i){b = i;}
	void set_c(int i){c = i;}
	void show_a(){cout << a << endl;}
	void show_b(){cout << b << endl;}
	void show_c(){cout << c << endl;}
};
class D : protected B
{
public:
	void set(int i, int j, int k){a = i; b = j; c = k;}
	void show(){show_a(); show_b(); show_c();}
};
int main()
{
	D ob;
	ob. set(3, 4, 5);
	ob.show();

	return 0;
}
