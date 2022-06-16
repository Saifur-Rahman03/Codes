#include <iostream>
#include <vector>
using namespace std;
void addEdge(vector<int> graph[], int u, int v);
int main()
{
	int n, e;
	cout << "Enter no. of vertex / node: ";
	cin >> n;
	cout << "Enter no. of edges: ";
	cin >> e;
	cout << endl;
	int m[n][n] = {};
	vector <int> graph[n];
	int u, v;
	for(int i = 0; i < e; i++){
		cout << "Enter the start and end vertex of edge: ";
		cin >> u;
		cin >> v;
		addEdge(graph, u, v);
		m[u][v]++;
		m[v][u]++;
	}
	cout << endl;
	cout << "Adjacency Matrix for Undirected Graph: \n";
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



