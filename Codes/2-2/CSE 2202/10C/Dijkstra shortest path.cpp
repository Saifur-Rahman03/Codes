#include <bits/stdc++.h>
#define V 6
using namespace std;
int minD(int d[], bool sp[]);
int printS(int d[]);
void dijsktra(int graph[V][V], int s);
int main()
{
	ifstream fin;
	int graph[V][V];
	fin.open("input.txt");
//	fin >> V;
	for(int i = 0; i < V; i++)
		for(int j = 0; j < V; j++)
			fin >> graph[i][j];


	dijsktra(graph, 0);
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
	cout << "Vertex\t\tDistance\n";
	for(int i = 0; i < V; i++)
		cout << i << "\t\t" << d[i] << endl;
}

void dijsktra(int graph[V][V], int s)
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
				cout << u << "\t\t" << d[u] << endl;
				cout << v << "\t\t" << d[v] << endl;
			}

	}
	printS(d);
}
