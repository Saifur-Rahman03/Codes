#include <iostream>
#include <fstream>
#include <cstdlib>
#include <vector>
using namespace std;

vector< pair<int, int> > v;
int main()
{
	ofstream fout;
	fout.open("random_points.txt");
	int n, a, b;

	cin >> n;

	for(int i = 0; i < n; i++){
		a = (rand() % 30) - 10;
		b = (rand() % 30) - 10;
		v.push_back(make_pair(a, b));
	}
	fout << n << endl;
	for(int i = 0; i < n; i++){
		cout << v[i].first << " " << v[i].second << endl;
		fout << v[i].first << " " << v[i].second << endl;
	}

}
