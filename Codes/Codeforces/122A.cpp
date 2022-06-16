#include <iostream>
using namespace std;

int main()
{
	int luckyNumbers[14] = {4, 7, 44, 47, 74, 77, 444, 447, 474, 477, 744, 747, 774, 777};
	int i, n, flag = 0;
	cin >> n;
	for(i = 0; i < 14; i++){
		if(n % luckyNumbers[i] == 0){
			flag = 1;
			break;
		}
		else
			flag = 0;
	}
	if(flag == 1)
		cout << "YES" << endl;
	else
		cout << "NO" << endl;
}
