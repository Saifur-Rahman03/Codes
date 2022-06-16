#include <iostream>
using namespace std ;
class base
{
public :
	int i;
};
class derived1 : virtual public base
{
public :
	int j;
};
class derived2 : virtual public base
{
public :
	int k;
};
class derived3 : public derived1 , public derived2
{
public :
	int product () { return i * j * k; }
};
int main ()
{
	derived3 ob;
	ob.i = 1;
	ob.j = 2;
	ob.k = 3;
	cout << " Product = " << ob. product () << endl;
	return 0;
}
