# include <iostream >
using namespace std ;
class base
{
	int x;
public :
	void setx(int i){x = i;}
	int getx(){return x;}
};
class derived : public base
{
	int y;
public :
	void sety(int i){y = i;}
	int gety(){return y;}
};
int main()
{
	base *p;
	base b_ob;
	derived d_ob;
	p = &b_ob;
	p->setx (30);
	cout << "Base object x: " << p->getx () << endl;
	p = &d_ob;
	p->setx (33);
	d_ob.sety (77);
	cout << "Derived object x: " << p->getx() << endl;
	cout << "Derived object y: " << d_ob.gety() << endl;
	return 0;
}