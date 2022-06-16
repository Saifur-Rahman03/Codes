//Not working .. need to do later
#include <iostream>
using namespace std;
int main()
{
	int k = 100, n = 100, j = 2;
	int prime[n] = {2, 3};
	int i, q = 1, flag = 0;
//	while(k){
	//k--;
	for(i = 0; i < j; i++){
		q *= prime[i];
	}
	for(i = 0; ; i++){
		if((q) % prime[i] == 0){
			flag = 0;
			break;
		}
		else
			flag = 1;
	}
	j++;
	if(flag == 1)
		prime[j] = q + 1;
	cout << prime[2];
}

