#include <iostream>
#include <cstring>
#include <string>
using namespace std;
int main()
{
	char charArr[100];
	string s = "fuck";
	strcpy(charArr, s.c_str());
	cout << charArr[0];
}
