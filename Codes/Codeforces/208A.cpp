#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main()
{
	string s;
	vector<char> r;
	cin >> s;
	int j = 0;
	int sp = 0;
	for(int i = 0; i < s.size(); i++){
		if(s[i] == 'W' && s[i + 1] == 'U' && s[i + 2] == 'B'){
			if(j != 0 && sp == 0){
				r.push_back(' ');
				sp++;
			}
			i += 2;
		}
		else{
			r.push_back(s[i]);
			j++;
			sp = 0;
		}
	}
	for(int i = 0; i < r.size(); i++)
		cout << r[i];
	cout << endl;
}
