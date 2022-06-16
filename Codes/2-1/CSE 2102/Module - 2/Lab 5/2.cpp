#include <iostream>
using namespace std;
int main()
{
	int na, nb;
	cout << "Enter no. of elements of set A: ";
	cin >> na;
	cout << "Enter no. of elements of set B: ";
	cin >> nb;
	int i, j;
	char a[na], b[nb];
	cout << "Enter elements of set A: ";
	for(i = 0; i < na; i++)
		cin >> a[i];
	cout << "Enter elements of set B: ";
	for(i = 0; i < nb; i++)
		cin >> b[i];
	cout << "\nCartesian product of set A and B:\n";
	for(i = 0; i < na; i++)
		for(j = 0; j < nb; j++){
			if(i == na - 1 && j == nb - 1)
				cout << "(" << a[i] << ", " << b[j] << ")\n";
			else
				cout << "(" << a[i] << ", " << b[j] << "), ";
		}
	return 0;
}
