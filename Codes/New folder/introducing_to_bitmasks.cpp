#include <bits/stdc++.h>
using namespace std;

void checkCase(char c);
string binaryValue(char c);


int main()
{
	char c;

	cout << "Enter 0 to break" << endl;
	cout << "ASCII value: " << int('0') << endl;
	cout << "Binary value: " << binaryValue('0') << endl;
	while(1){
		cout << endl << "Enter a character: ";
		cin >> c;
		if(c == '0')
			break;
		checkCase(c);
		cout << "ASCII value: " << int(c) << endl;
		cout << "Binary value: " << binaryValue(c) << endl;
	}


	return 0;
}
void checkCase(char c)
{
	if( (c & 0b00100000) == 0)
		cout << "Uppercase" << endl;
	else if( (c & 0b00100000) == 0b00100000)
		cout << "lowercase" << endl;
	//bitmask = 0010 000;
	//A = 0100 0001
	//a = 0110 0001
	//0b is for binary, 0x is for hexa decimal

}
string binaryValue(char c)
{
	int a = int(c);
	int r;
	string bin = "";

	while(1){
		r = a % 2;
//		cout << a << "\t" << r << endl;
		a =  a / 2;
		bin.push_back('0' + r);
		if(a == 0){
			if(bin.length() == 9)
				break;
			else
				continue;
		}
		if(bin.length() % 4 == 0)
			bin.push_back(' ');
		//cout << bin.length() << endl;

	}
	reverse(bin.begin(), bin.end());
	return bin;
}
