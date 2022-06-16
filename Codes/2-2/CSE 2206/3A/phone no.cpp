#include <iostream>
#include <fstream>
#include <vector>
using namespace std;
string buffer, temp;
vector<string>phoneNo;
int phoneNoAutomata (string phoneNumber);

int main()
{
	ifstream f1;
	f1.open("phone no.txt");
	cout << "Buffer:\n";
	while(!f1.eof()){
		f1 >> buffer;
		phoneNo.push_back(buffer);
		cout << buffer << endl;
	}
	cout << "\nVector:\n";
	for(int i = 0; i < phoneNo.size(); i ++){
		cout << phoneNo[i] << endl;
		phoneNoAutomata(phoneNo[i]);
	}
}
int phoneNoAutomata (string phoneNumber)
{
	string phoneNumberFirstPart = phoneNumber.substr(0, 5);
	int flag = 1;
	for(int i = 1; i < phoneNumber.size(); i++){
		if(!isdigit(phoneNumber[i]))
			flag = 0;
	}
	if(phoneNumber.size() != 14)
		flag = 0;
	if(phoneNumberFirstPart != "+8801")
		flag = 0;
	if(phoneNumber[5] == '0' || phoneNumber[5] == '1' || phoneNumber[5] == '2' || phoneNumber[5] == '4')
		flag = 0;
	if(flag == 0)
		cout << "Phone number is invalid\n";
	else
		cout << "Phone number is valid\n";
}
