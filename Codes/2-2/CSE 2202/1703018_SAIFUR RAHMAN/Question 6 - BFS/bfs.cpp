#include <bits/stdc++.h>
using namespace std;

class Graph
{
	int V;
	list<int> *adj;
public:
	Graph(int V);
	void addEdge(int v, int w);
	void BFS(int s);
};

Graph::Graph(int V)
{
	this->V = V;
	adj = new list<int>[V];
}

void Graph::addEdge(int v, int w)
{
	adj[v].push_back(w);
}

void Graph::BFS(int s)
{
	bool *visited = new bool[V];
	for(int i = 0; i < V; i++)
		visited[i] = false;

	list<int> queue;

	visited[s] = true;
	queue.push_back(s);

	list<int>::iterator i;

	while(!queue.empty())
	{
		s = queue.front();
		cout << s + 1 << " ";
		queue.pop_front();
		for (i = adj[s].begin(); i != adj[s].end(); ++i) {
			if (!visited[*i]) {
				visited[*i] = true;
				queue.push_back(*i);
			}
		}
	}
}
int main()
{
	ifstream fin;
	fin.open("bfsgraph.txt");
	while(!fin.eof()) {
		int V;
		fin >> V;
		cout << "\nnumber of vertex: " << V << endl;
		int graph[V][V];
		Graph g(V);
		for(int i = 0; i < V; i++) {
			for(int j = 0; j < V; j++) {
				fin >> graph[i][j];
			}
		}

		int source;
		fin >> source;
		source = source - 1;
		cout << "\ngraph data in matrix form: " << endl;
		for(int i = 0; i < V; i++) {
			for(int j = 0; j < V; j++) {
				cout << graph[i][j] << "\t";
			}
			cout << endl;
		}
		for(int i = 0; i < V; i++) {
			for(int j = 0; j < V; j++) {
				if(graph[i][j] == 1) {
					g.addEdge(i, j);
					g.addEdge(j, i);
				}
			}
		}
		cout << "\nstarting vertex: " << source + 1 << "\n";
		cout << "\nThe nodes reachable are:" << endl;
		g.BFS(source);
		cout << endl;
	}
    return 0;
}
