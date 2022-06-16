#include <iostream>
#include <string>
using namespace std;

class student
{
private:
	string name;
	int roll;
	float height, weight;
public:
	student( );
	~student( );
	void display( );
};
student :: student ( ){
	name = "NAim";
	roll = 18;
	height = 1.78;
	weight = 64;
}
void student :: display ()
{
	cout << "\nName: " << name;
	cout << "\nRoll no: " << roll;
	cout<< "\nHeight: " << height << "m";
	cout<<"\nWeight: " << weight << "kg\n";
}
student :: ~ student ()
{
	cout << "\ndestructing...\n";
}
int main ()
{
	student obj;
	student( );
	obj.display( );

	return 0;;
}
