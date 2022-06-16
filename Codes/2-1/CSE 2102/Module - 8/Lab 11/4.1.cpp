#include <iostream>
#include <vector>
#include <fstream>
using namespace std;
void addEdge(vector<int> graph[], int u, int v);
int main()
{
	ifstream fin;
	fin.open("weighted graph.txt");
	int n, e;
	fin >> n;
	fin >> e;
	int m[n][n] = {};
	vector <int> graph[n];
	int u, v, w;
	for(int i = 0; i < e; i++){
		fin >> u;
		fin >> v;
		fin >> w;
		addEdge(graph, u, v);
		m[u][v] = w;
		m[v][u] = w;
	}
	cout << "Adjacency Matrix for Undirected weighted Graph: \n";
	for(int i = 0; i < n; i++){
		for(int j = 0; j < n; j++)
			cout << m[i][j] << " ";
		cout << endl;
	}

	return 0;
}
void addEdge(vector<int> graph[], int u, int v)
{
	graph[u].push_back(v);
	graph[v].push_back(u);
}



