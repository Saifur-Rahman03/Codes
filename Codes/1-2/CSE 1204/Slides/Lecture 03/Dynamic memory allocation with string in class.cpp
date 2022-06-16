#include <iostream>
#include <cstring>
#include <cstdlib>
#define SIZE 100
using namespace std;
class strtype{
	char *p;
	int l;
public:
	strtype( );
	~strtype( );
	void set(char *ptr);
	void show( );
};
int main( )
{
	strtype s1, s2;
	s1.set("Which is best\n");
	s2.set("CSE\n");

	s1.show( );
	s2.show( );

	return 0;
}
strtype :: strtype( )
{
	p = new char[SIZE];
	if(!p){
		cout << "Allocation error\n";
		exit(1);
	}
}
strtype :: ~strtype( )
{
	cout << "Destructing...\n";
	free(p);
}
void strtype :: set(char *ptr)
{
	if(strlen(p) >= SIZE){
		cout << "String too big\n";
	}
	p = ptr;
	l = strlen(p);
}
void strtype :: show( )
{
	cout << p << "- length: " << l << endl;
}
