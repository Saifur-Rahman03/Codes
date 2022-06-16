#include <iostream>
using namespace std;
class B
{
	int x;
public:
	B(){x = 0;}
	B(int i){x = i;}
	void set_x(int i){x = i;}
	int get_x(){return x;}
	void show_x(){cout << x << endl;}
};
class D : private B
{
	int y;
public:
	D() : B(){y = 0;}
	D(int i) : B(i){y = i;}
	void set_y(int i){set_x(i);y = i;}
	int get_y(){return y;}
	void show_y(){show_x();cout << y << endl;}
};
int main()
{
	D ob(100);
	ob.show_y();
	ob.set_y(10);
	ob.show_y();
	return 0;
}

