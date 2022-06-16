#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n, i, j, count = 1, sum = 0, sumc = 0, temp;
	cin >> n;
	int c[n];
	for(i = 0; i < n; i++)
		cin >> c[i];
	for(i = 0; i < n; i++)
		sum += c[i];
	 for(i = 0; i < n-1; i++){
        for(j = i + 1; j < n; j++){
            if(c[i] < c[j]){
                temp = c[i];
                c[i] = c[j];
                c[j] = temp;
            }
        }
    }
	i = 0;
	sumc = c[i];
	while((sum / 2) >= sumc){
		count++;
		i++;
		sumc += c[i];
	}
	cout << count << endl;
}
