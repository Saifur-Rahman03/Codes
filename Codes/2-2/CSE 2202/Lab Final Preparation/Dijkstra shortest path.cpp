#include <bits/stdc++.h>
int V;
using namespace std;
int minD(int d[], bool sp[]);
int printS(int d[]);
void dijsktra(int graph[100][100], int s);
int main()
{
	ifstream fin;
	int graph[100][100];
	fin.open("dijkstra input.txt");
	while(!fin.eof()) {
		fin >> V;
		for(int i = 0; i < V; i++)
			for(int j = 0; j < V; j++)
				fin >> graph[i][j];

		cout << "\nMatrix: \n";
		for(int i = 0; i < V; i++) {
			for(int j = 0; j < V; j++)
				cout << graph[i][j] << " ";
			cout << endl;
		}
		dijsktra(graph, 0);
	}

}

int minD(int d[], bool sp[])
{
	int min = INT_MAX, min_index;

	for(int v = 0; v < V; v++)
	{
		if(sp[v] == false && d[v] <= min){
			min = d[v], min_index = v;
		}

	}

	return min_index;
}

int printS(int d[])
{
	cout << "\nVertex\t\tDistance\n";
	for(int i = 0; i < V; i++)
		cout << i + 1 << "\t\t" << d[i] << endl;
}

void dijsktra(int graph[100][100], int s)
{
	int d[V];
	bool sp[V];

	for(int i = 0; i < V; i++){
		d[i] = INT_MAX, sp[i] = false;
	}
	d[s] = 0;

	for(int c = 0; c < V - 1; c++){
		int u = minD(d, sp);
		sp[u] = true;

		for(int v = 0; v < V; v++)
			if(!sp[v] && graph[u][v] && d[u] != INT_MAX && d[u] + graph[u][v] < d[v]){
				d[v] = d[u] + graph[u][v];
				//cout << u << "\t\t" << d[u] << endl;
				//cout << v << "\t\t" << d[v] << endl;
			}

	}
	printS(d);
}
