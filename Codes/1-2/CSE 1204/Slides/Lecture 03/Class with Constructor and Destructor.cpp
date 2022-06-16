#include <iostream>
using namespace std;

class myclass
{
	int a;
public:
	myclass( );
	~myclass( );
	void show( );
};
int main( )
{
	myclass obj;
	obj.show( );
	return 0;
}
myclass :: myclass( )
{
	cout << "In constructor\n";
	a = 10;
}
myclass :: ~myclass( )
{
	cout << "Destructing....\n";
}
void myclass :: show( )
{
	cout << a << "\n";
}
