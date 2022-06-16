#include <iostream>
#include <cctype>
#include <string>
using namespace std;
string s;
bool allUpper();
int main()
{
	int i;
	string r;
	cin >> s;

	r = s;
	if(allUpper() == true){
		for(i = 0; i < s.size(); i++){
			s[i] = s[i] + 32;
		}
		cout << s << endl;
		return 0;
	}
	if(islower(s[0])){
		s[0] = s[0] - 32;
	}
	for(i = 1; i < s.size(); i++){
		if(isupper(s[i])){
			s[i] = s[i] + 32;
		}
		else if(islower(s[i])){
			cout << r << endl;
			return 0;
		}
	}

	cout << s << endl;

	return 0;
}
bool allUpper()
{
	int flag = 0;
	for(int i = 0; i < s.size(); i++){
		if(isupper(s[i])){
			flag = 1;
		}
		else{
			flag = 0;
			break;
		}
	}
	if(flag == 1)
		return true;
	else
		return false;
}
