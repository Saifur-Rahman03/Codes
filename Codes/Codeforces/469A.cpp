#include <iostream>
#include <vector>
using namespace std;
int main()
{
	int flag = 1;
	int n;
	int x, y;
	cin >> n;
	int levels[n], visited[n];
	for(int i = 1; i <= n; i++){
		levels[i - 1] = i;
	}
	cin >> x;
	int a[x];
	for(int i = 0; i < x; i++){
		cin >> a[i];
		visited[(a[i] - 1)] = a[i];
	}
	cin >> y;
	int b[y];
	for(int i = 0; i < y; i++){
		cin >> b[i];
		visited[(b[i] - 1)] = b[i];
		}
	for(int i = 0; i < n; i++){
		if(levels[i] != visited[i]){
			flag = 0;
			break;
		}
	}
	if(flag == 1)
		cout << "I become the guy." << endl;
	else
		cout << "Oh, my keyboard!" << endl;
}
