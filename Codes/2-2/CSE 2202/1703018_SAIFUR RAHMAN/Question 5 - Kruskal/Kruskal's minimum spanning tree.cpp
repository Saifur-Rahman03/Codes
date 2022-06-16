#include <bits/stdc++.h>
#define edge pair<int, int>
using namespace std;

class Graph {
private:
	vector<pair<int, edge> > G;
	vector<pair<int, edge> > T;
	int *parent;
	int V;
	int minimum;
public:
	Graph(int V);
	void addEdge(int u, int v, int w);
	int find_set(int i);
	void union_set(int u, int v);
	void kruskal();
	void print();
};
Graph::Graph(int V) {
	parent = new int[V];
	minimum = 0;
	for (int i = 0; i < V; i++)
		parent[i] = i;

	G.clear();
	T.clear();
}
void Graph::addEdge(int u, int v, int w) {
	G.push_back(make_pair(w, edge(u, v)));
}
int Graph::find_set(int i) {
	if (i == parent[i])
		return i;
	else
		return find_set(parent[i]);
}

void Graph::union_set(int u, int v) {
	parent[u] = parent[v];
}
void Graph::kruskal() {
	int i, uRep, vRep;
	sort(G.begin(), G.end());
	for (i = 0; i < G.size(); i++) {
		uRep = find_set(G[i].second.first);
		vRep = find_set(G[i].second.second);
		if (uRep != vRep) {
			T.push_back(G[i]);
			minimum += G[i].first;
			union_set(uRep, vRep);
		}
	}
}
void Graph::print() {

	for (int i = 0; i < T.size(); i++) {
		cout << i + 1 << ". edge (" <<T[i].second.first + 1 << " , " << T[i].second.second + 1 << ") = " << T[i].first;
	cout << endl;
	}
	cout << "\n Minimum cost = " << minimum << endl;
}

int main()
{
	ifstream fin;
	fin.open("kgraph.txt");
	int V;
	while(!fin.eof()) {
		fin >> V;
		int graph[V][V];
		Graph g(V);
		for(int i = 0; i < V; i++) {
			for(int j = 0; j < V; j++) {
				fin >> graph[i][j];
			}
		}
		cout << "Implementation of Kruskal's algorithm\n" << endl;
		cout << "no. of vertex: " << V << endl << endl;
		cout << "cost adjacency matrix: " << endl;
		for(int i = 0; i < V; i++) {
			for(int j = 0; j < V; j++) {
				cout << graph[i][j] << "\t";
			}
			cout << endl;
		}
		for(int i = 0; i < V; i++) {
			for(int j = 0; j < V; j++) {
				g.addEdge(i, j, graph[i][j]);
			}
		}
		cout << "\nThe edges of Minimum Cost Spanning Tree are\n" << endl;
		g.kruskal();
		g.print();
	}
	return 0;
}
