#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t, j,n;
    int a[1000];
    cin >> t;
    int i = 0, sum = 0, count;
    while(t)
    {
        cin >> n;
        for(j = 0; j < n; j++)
            cin >> a[j];
	for(i=0;i<n;i++){
		if(sum < i)
			sum+=a[i];
		else if(sum == i){
			cout << sum;
			break;
		}
		else
	}
    }
    return 0;
}
