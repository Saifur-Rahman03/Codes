#include <iostream>
using namespace std;
int main()
{
	int i, j, f = 1;
	cin >> i;
	for(j = 1; j <= i; j++){
		f *= j;
	}
	cout << f << endl;
}



