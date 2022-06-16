#include <iostream>
using namespace std;
int main()
{
	double sum = 1;
	int i = 1, n = 1;
	cout << 1;
	n++;
	while(n){
		sum += 1.0 / (i * 2.0);
		i *= 2;
		if(i == 0)
			break;
		cout << " + (1 / " << (i * 2.0) << ") ";
	}
	cout << "\n\nValue of the Series: " << sum << endl;
	return 0;
}
