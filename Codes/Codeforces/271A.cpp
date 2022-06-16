#include <iostream>
#include <string>
using namespace std;

int main()
{
	int i, j, year;
       string y;
       cin >> y;

       year = stoi(y);
       year++;
       y = to_string(year);

       for(i = 0; i < y.size(); i++){
		for(j = 0; j < y.size(); j++){
			if(i == j){
				continue;
			}
			else{
				if(y[i] == y[j]){
					year = stoi(y);
					year++;
					y = to_string(year);
					i = 0;
				}
			}
		}
       }

       cout << y << endl;
}
