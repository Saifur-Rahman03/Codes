#include <iostream>
#include <string>
using namespace std;
int main()
{
	string s;
	int i, j, count = 0;
	cin >> s;
	for(i = 0; i < s.length(); i++){
		for(j = 0; j < i; j++){
			if(s[i] == s[j]){
				count--;
				break;
			}
		}
		count++;
	}

	if(count % 2 == 0)
		cout << "CHAT WITH HER!" << endl;
	else
		cout << "IGNORE HIM!" << endl;

	return 0;
}
