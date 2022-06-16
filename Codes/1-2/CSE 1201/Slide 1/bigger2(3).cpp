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
	cout << endl;

	if(a == b && b == c){
		cout << "Every number is equal\n";
		return 0;}
	if(a == b && a > c){
		cout << "a and b is equal and bigger\n";
		return 0;}
	if(a == c && a > b){
		cout << "a and c is equal and bigger\n";
		return 0;}
	if(b == c && a < b){
		cout << "b and c is equal and bigger\n";
		return 0;}
	if(a > b && a > c){
		cout << "\na is bigger\n";
		return 0;}
	if(a < b && b > c){
		cout << "\nb is bigger\n";
		return 0;}
	cout << "c is bigger\n";
	return 0;
}
