#include <iostream>
#include <ctime>
using namespace std;

class timer{
	clock_t start;
public:
	timer( );
	~timer( );
};
int main( )
{
	timer obj;
	char c;
	cout << "Press a key followed by ENTER: ";
	cin >> c;

	return 0;
}
timer :: timer( )
{
	start = clock( );
}
timer :: ~timer( )
{
	clock_t end;
	end = clock( );
	cout << "Elapsed time: " << (end - start)  /
							 CLOCKS_PER_SEC << "\n";
}
