#include <iostream>
using namespace std;
class B
{
public:
	int i;
};
class D1 : virtual public B
{
public:
	int j;
} ;
class D2 : virtual public B
{
public:
	int k;
};
class D3 : public D1, public D2
{
public:
	void p(){ cout << i * j * k << endl;}
};
int main()
{
	D3 ob;
	ob. i = 3;
	ob. j = 3;
	ob. k = 3;
	ob. p();

	return 0;
}
