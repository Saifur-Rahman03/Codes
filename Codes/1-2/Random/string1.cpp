#include <iostream>
#include <string>
using namespace std;
int main()
{
	string fn, ln;
	cin >> fn >> ln;
	for(int i = 0; i < ln. length(); i++){
		cout << ln[i] << " ";
		ln[i] = '//';
	}
	cout << endl;
	for(int i = 0; i < ln. length(); i++)
		cout << ln[i] << " ";
}
