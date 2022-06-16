#include <iostream>
#include <string>
using namespace std;
void print(int z, int o);
int main()
{
	int i, a, b, e, t, z = 0, o = 0;
	cin >> t;
	string s;
	for(i = 0; i < t; i++){
		cin >> s;
		z = 0; o = 0;
		for(int j = 0; j < s.length(); j++){
			if(s[j] == '0')
				z++;
			else if(s[j] == '1')
				o++;
		}
/*		a = z % 2;
		b = o % 2;
		if(z != 0 && o != 0 && (a == 1 || b == 1)){
				cout << "DA" << endl;
			}
		else{
			cout << "NET" << endl;
		}
*/
		if(z > o){
			e = z - o;
			z = z - e;
			print(z, o);
		}
		else if(z < o){
			e = o - z;
			o = o - e;
			print(z, o);
		}
		else{
			print(z, o);
		}
	}

}
void print(int z, int o)
{
	if((z % 2) == 1 && (o % 2) == 1){
		cout << "DA" << endl;
	}
	else{
		cout << "NET" << endl;
	}
}
