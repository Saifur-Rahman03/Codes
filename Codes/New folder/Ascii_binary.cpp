#include <bits/stdc++.h>

using namespace std;

string binaryValue(char c);

int main()
{
	char n;
	string str;
	char c;
	cout << "character or string: (c / s): ";
	cin >> n;
	if(n == 'c'){
		cout << "\nEnter 0 to break" << endl;
		cout << "ASCII value of ' ': " << int(' ') << endl;
		cout << "Binary value of ' ': " << binaryValue(' ') << endl;
		cout << "ASCII value of 0: " << int('0') << endl;
		cout << "Binary value of 0: " << binaryValue('0') << endl;
		cout << "\nEnter character: " << endl;
		while(1){
			cout << endl;
			cin >> c;
			if(c == '0')
				break;
			cout << "ASCII value: " << int(c) << endl;
			cout << "Binary value: " << binaryValue(c) << endl;
		}
	}
	else if(n == 's'){
		cout << "\nEnter a string: ";
		cin.ignore();
		getline(cin, str);
		cout << endl;
		cout << "ASCII values: ";
		for(int i = 0; i < str.length(); i++){
			c = str[i];
			cout << int(c) << " ";
		}
		cout << endl;
		cout << "Binary values: ";
		for(int i = 0; i < str.length(); i++){
			c = str[i];
			cout << binaryValue(c) << "    ";
		}
		cout << endl;
	}
	else{
		cout << "invalid input" << endl;
	}


	return 0;
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

