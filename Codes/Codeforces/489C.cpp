#include <bits/stdc++.h>

using namespace std;
int main()
{
	int i, m, s, k;
	cin >> m >> s;
	if(s == 0){
		if(m == 1){
			cout << "0 0" << endl;
			return 0;
		}
		else{
			cout << "-1 -1" << endl;
			return 0;
		}
	}
	string maxi = "";
	string mini = "";
	for(i = 0; i < m; i++){
		k = min(9, s);
		maxi.push_back('0' + k); //converting to string
		s -= k;
	}
	if(s > 0){
		cout << "-1 -1" << endl;
		return 0;
	}
	for(i = m - 1; i >= 0; i--){
		mini.push_back(maxi[i]);
	}
	for(i = 0; i < m; i++){
		if(mini[i] <= '0'){
			mini[i]++;
			mini[i + 1]--;
			break;
			//cout << mini[i + 1] << endl;
		}
	}
	for(i = 1; i < m; i++){
		if(mini[i] < '0'){
			mini[i]++;
			mini[i + 1]--;
		}
	}
//	cout << mini << endl;
	cout << mini << " " << maxi << endl;
}
