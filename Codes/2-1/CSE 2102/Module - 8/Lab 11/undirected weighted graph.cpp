#include <iostream>
#include <vector>
#include <fstream>
using namespace std;
typedef pair<int, int> P;
int main()
{
	int vertex, edge;
	ifstream fin;
	fin.open("weighted graph.txt");
	fin >> vertex >> edge;
	vector <P> v[vertex];
	cout << vertex << " " << edge << endl;
	for(int i = 0; i < edge; i++)
	{
		int source;
		P p;
		fin >> source >> p.first >> p.second;
		v[source].push_back(p);
		int s2;
		s2 = p.first;
		p.first = source;
		v[s2].push_back(p);
	}
	for(int i = 0; i < vertex; i++){
		cout << i << " - ";
  		for(int j = 0; j < v[i].size(); j++){
			cout << v[i][j].first << " (" << v[i][j].second << ") - ";
		}
		cout << endl;
	}
	return 0;
}
