#include <iostream>
#include <vector>
using namespace std;
void createGraph(vector <int> graph[], int n, int e);
void addEdge(vector <int> graph[], int u, int v);
void printGraph(vector <int> graph[], int n);
int main()
{
	int n, e;
	cout << "Enter no. of vertex / node: ";
	cin >> n;
	cout << "Enter no. of edges: ";
	cin >> e;
	cout << endl;
	vector <int> graph[n];
	createGraph(graph, n, e);
	printGraph(graph, n);
	return 0;
}
void createGraph(vector <int> graph[], int n, int e)
{
	int u, v;
	for(int i = 0; i < e; i++){
	cout << "Enter the start and end vertex of edge: ";
	cin >> u;
	cin >> v;
	addEdge(graph, u, v);
	}
	cout << endl;
}
void addEdge(vector<int> graph[], int u, int v)
{
	graph[u].push_back(v);
	graph[v].push_back(u);
}
void printGraph(vector <int> graph[], int n)
{
	cout << "Undirected Graph:\n";
	vector <int> :: iterator it;
	int deg;
	for(int i = 0; i < n; i++){
		cout << "Adjacency list of vertex " << i << ": ";
		for(it = graph[i]. begin(), deg = 0; it != graph[i]. end(); it++, deg++){
			cout << *it << " ";
		}
		cout << "\ndegree: " << deg;
		cout << endl;
	}
}
