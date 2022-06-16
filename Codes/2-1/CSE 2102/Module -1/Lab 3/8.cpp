#include <iostream>
using namespace std;
int main()
{
	int x, y, z, flag = 0;
	cout << "Equation: x^2 + y ^ 2 = z ^ 2\n";
	cout << "Enter z: ";
	cin >> z;
	cout << "(x, y): \n";
	for(int i = 0; i < z; i++){
		for(int j = 0; j < z; j++){
			if(i * i + j * j == z * z){
				cout << "(" << i << ", " << j << ")" << endl;
				flag = 1;
			}
		}
	}
	if(flag == 0)
		cout << "Not Found\n";
}
