#include <iostream>
#include <string>

using namespace std;

int main()
{
	int i, j, n, count = 0;
	char s[51];

	cin >> n;
	for(i = 0; i < n; i++)
		cin >> s[i];

	for(i = 0; i < n - 1; i++)
		if(s[i + 1] == s[i])
			count++;

	cout << count << endl;

	return 0;
}
