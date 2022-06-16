#include <bits/stdc++.h>

using namespace std;

void swapChar(char *a, char *b);

int main()
{
	int n, t;
	cin >> n >> t;
	char a[n];
	for(int i = 0; i < n; i++) {
		cin >> a[i];
	}
	while(t--) {
              for(int i = 0; i < n; i++) {
			if(a[i] == 'G' && a[i - 1] == 'B') {
				swapChar(&a[i], &a[i - 1]);
				i++;
			}
              }
	}

	for(int i = 0; i < n; i++) {
		cout << a[i];
	}
	cout << endl;
}

void swapChar(char *a, char *b)
{
	char temp;
	temp = *a;
	*a = *b;
	*b = temp;
}
