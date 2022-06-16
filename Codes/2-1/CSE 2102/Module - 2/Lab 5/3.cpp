#include <iostream>
#include <cmath>
using namespace std;
class power_set
{
public:
	void printPowerSet(char *s, int s_size){
		unsigned int ps_size = pow(2, s_size);
		int j, counter;
		for(counter = 0; counter < ps_size; counter++){
			for(j = 0; j < s_size; j++){
				if(counter & (1 << j))
					cout << s[j];
			}
			cout << endl;
		}
	}
};
int main()
{
	power_set p;
	int n;
	cout << "Enter no. of elements of set: ";
	cin >> n;
	char s[n];
	cout << "Enter elements of set: ";
	for(int i = 0; i < n; i++)
		cin >> s[i];
	cout << "Power set elements:\n";
	p.printPowerSet(s, n);
	return 0;
}
