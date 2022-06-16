#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	int x, y, z, flag = 0;
	cout << "Equation: x^3 + y ^ 3 = z ^ 3\n";
	cout << "Enter z: ";
	cin >> z;
	cout << "(x, y): \n";
	for(int i = 0; i < z; i++){
		for(int j = 0; j < z; j++){
			if(i * i * i + j * j * j == z * z * z){
				cout << "(" << i << ", " << j << ")" << endl;
				flag = 1;
			}
		}
	}
	if(flag == 0)
		cout << "Not Found\n";
		z++;
}

