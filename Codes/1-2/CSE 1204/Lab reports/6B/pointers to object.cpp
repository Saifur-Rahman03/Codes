#include <iostream>
#include <string>
using namespace std;
class student
{
private:
	int roll;
	string name;
public:
	student( ) : roll(0), name("")
	{}
	student(int r, string n) : roll(r), name (n)
	{}
	void get( )
	{
		cout<<"Enter Roll no: ";
		cin>>roll;
		cout<<"Enter Name: ";
		cin>>name;
	}
	void print( )
	{
		cout<<"\nRoll no: " << roll << endl;
		cout<<"Name: " << name << endl;
	}
};
int main ( )
{
	student *ps = new student;
	(*ps).get( );
	(*ps).print( );
	delete ps;
	return 0;
}
