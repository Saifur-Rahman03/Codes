#include <iostream>
#include <string>
using namespace std;

int main()
{
	int it;
	int i, n, e, t, temp, n1;
	i = n = e = t = 0;
	string s;
	cin >> s;
	for(it = 0; it < s.size(); it++){
		if(s[it] == 'n')
			n++;
		if(s[it] == 'i')
			i++;
		if(s[it] == 'e')
			e++;
		if(s[it] == 't')
			t++;
	}
	n1 = (n - 1) / 2;

	e /= 3;

	temp = n1;
	if(temp >= e)
		temp = e;
	if(temp >= i)
		temp = i;
	if(temp >= t)
		temp = t;

	cout << temp << endl;
	return 0;
}
