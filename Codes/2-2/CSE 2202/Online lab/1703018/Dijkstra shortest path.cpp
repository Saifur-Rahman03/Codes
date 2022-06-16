#include <bits/stdc++.h>
using namespace std;
int graph[100][100];
int V;
int source;
int minD(int d[], bool sp[]);
int printS(int d[]);
void dijsktra(int s, int V);
int main()
{
	ifstream fin;
	fin.open("city-map.txt");
	int n;
	fin >> n;
	while(n--) {
		cout << "\nEnter the number of cities: ";
		fin >> V;
		cout << V << endl;
		for(int i = 0; i < V; i++){
			for(int j = 0; j < V; j++){
				fin >> graph[i][j];
				cout << graph[i][j] << "\t";
			}
			cout << endl;
		}

		cout << "\nEnter the source node: ";
		cin >> source;
		dijsktra(source - 1, V);
	}
	return 0;
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
	for(int i = 0; i < V; i++)
		cout << source << " -> " << i + 1 << ", cost = " << d[i] << endl;
}

void dijsktra(int s, int V)
{
	int d[V];
	int count = 0;
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
				count++;
		}
	}
	cout << "\nShortest Path:" << endl;
	printS(d);
	cout << "count = " << count << endl;
}
