#include <iostream>
using namespace std;

class myclass
{
	int x, y, z;
public :
	myclass ();
	~ myclass ();
	void show();
};
myclass :: myclass ()
{
	cout << "In constructor \n";
	x = 10;
	y = 20;

}
myclass ::~ myclass ()
{
	cout << " Destructing ...\n";
}
void myclass :: show ()
{
	cout << x << "\n"
		<< y << "\n";
}
int main ()
{
	myclass ob;
	ob. show ();
	return 0;
}

