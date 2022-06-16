#include <iostream>
#include <vector>

using namespace std;

vector <int> v;
vector <int> :: iterator it1;
vector <int> :: iterator it2;

//void printVector();

int main()
{
	int i, j, n, a;
	cin >> n;
	for(i = 0; i < n; i++){
		cin >> a;
		v.push_back(a);
	}
//	printVector();
	i = 0;
	while(i < v.size()){
		if(v[i] > v[i + 1]){
			if(i < (v.size() / 2) - 1){
				it1 = v.begin();
				it2 = v.begin() + (v.size() / 2);
				v.erase(it1, it2);
				i = 0;
			//	printVector();
			}
			else if(i >= (v.size() / 2) - 1){
				it1 = v.begin() + (v.size() / 2);
				it2 = v.end();
				v.erase(it1, it2);
				i = 0;
			//	printVector();
			}
		}
		if(v[i] <= v[i + 1])
			i++;
		if(i + 1 == v.size())
			break;
	}
	cout << v.size() << endl;

	return 0;
}
/*void printVector()
{
	for(int i = 0; i < v.size(); i++)
		cout << v[i] << " ";
	cout << endl;
}
*/
