#include <bits/stdc++.h>
#include <fstream>

using namespace std;

int v[100][100];
int n, m;
void knapsackDp(int *p, int *w, int *x);
void initialize();
void print();
void printArray(int *a);
int maxOf(int a, int b);
int highestIndex();
int searchIndex(int x);


int main()
{
	ifstream fin;
	fin.open("knapsack 01 dp tabular.txt");
	while(!fin.eof())
	{
		fin >> n >> m;

		n++; m++;
		initialize();
		int p[n], w[n], x[n] = {0};
		p[0] = w[0] = 0;

		for(int i = 1; i < n; i++) {
			fin >> p[i];
		}
		for(int i = 1; i < n; i++) {
			fin >> w[i];
		}

		cout << "\nprofit: ";
		printArray(p);
		cout << "weight: ";
		printArray(w);
		cout << endl;

		knapsackDp(p, w, x);

		cout << "table:\n";
		print();
		cout << "\n0/1 knapsack: " << endl;
		printArray(x);
		cout << endl << endl;
	}

}
void knapsackDp(int *p, int *w, int *x)
{
	for(int i = 1; i < n; i++) {
		for(int j = 1; j < m; j++) {
			if(j - w[i] >= 0) {
				v[i][j] = maxOf(v[i - 1][j], v[i - 1][j - w[i]] + p[i]);
			}
			else {
				v[i][j] = v[i - 1][j];
			}
		}
	}
	int maxRow = highestIndex();
	int maxProfit = v[maxRow][m - 1];
	x[maxRow]++;
	while(maxProfit > 0) {
		maxProfit = maxProfit - p[maxRow];
		maxRow = searchIndex(maxProfit);
		x[maxRow]++;
	}
}
int searchIndex(int x)
{
	int idx = -1;
	for(int i = 0; i < n; i++) {
		for(int j = 0; j < m; j++) {
			if(v[i][j] == x) {
				idx = i;
				return idx;
			}
		}
	}
	return idx;
}
int highestIndex()
{
	int h = -1;
	int idx = -1;
	for(int i = 0; i < n; i++) {
		for(int j = 0; j < m; j++) {
			if(v[i][j] > h) {
				h = v[i][j];
				idx = i;
			}
		}
	}
	return idx;
}
int maxOf(int a, int b)
{
	return (a > b) ? a : b;
}
void initialize()
{
	for(int i = 0; i < n; i++) {
		for(int j = 0; j < m; j++) {
			v[i][j] = 0;
		}
	}
}
void print()
{
	for(int i = 0; i < n; i++) {
		for(int j = 0; j < m; j++)
			printf("%3d ", v[i][j]);
		cout << endl;
	}
}
void printArray(int *a)
{
	for(int i = 1; i < n; i++) {
		cout << a[i] << "  ";
	}
	cout << endl;
}
