#include <iostream>
using namespace std;

int main()
{
	int n, i;
	int in, out, cap = 0, caps = 0;
	cin >> n;
	for(i = 0; i < n; i++){
		cin >> out;
		cin >> in;
		cap -= out;
		cap += in;
		if(cap > caps)
			caps = cap;
	}
	cout << caps << endl;
}
