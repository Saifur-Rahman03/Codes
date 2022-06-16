#include <iostream>
using namespace std;

int main( )
{
	int a, b, c;

	cout << "Enter a: ";
	cin >> a;
	cout << "Enter b: ";
	cin >> b;
	cout << "Enter c: ";
	cin >> c;

	if(a > b){
		if(a > c)
			cout << "\na is bigger\n";
		else
			cout << "\nc is bigger\n";
	}
	else{
		if(b > c)
			cout << "\nb is bigger\n";
		else
			cout << "\nc is bigger\n";
	}

	return 0;
}
