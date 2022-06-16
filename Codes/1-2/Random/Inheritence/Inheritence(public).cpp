#include <iostream>
using namespace std;
class B
{
	int x;
public:
	B(){x = 0; cout << "Constructing B\n";}
	B(int i){x = i; cout << "Constructing B\n";}
	~B(){cout << "Destructing B\n";}
	void set_x(int i){x = i;}
	int get_x(){return x;}
	void show_x(){cout << x << endl;}
};
class D : public B
{
	int y;
public:
	D() : B(){y = 0; cout << "Constructing D\n";}
	D(int j) : B(j){y = j; cout << "Constructing D\n";}
	~D(){cout << "Destructing D\n";}
	void set_y(int i){y = i;}
	int get_y(){return y;}
	void show_y(){cout << y << endl;}
};
int main()
{
	D ob(100);
	ob.show_x();
	ob.show_y();
	ob.set_x(5);
	ob.set_y(10);
	ob.show_x();
	ob.show_y();
	return 0;
}
