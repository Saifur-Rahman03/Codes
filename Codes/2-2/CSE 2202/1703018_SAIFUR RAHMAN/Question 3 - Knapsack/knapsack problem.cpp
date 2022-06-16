#include <bits/stdc++.h>

using namespace std;

int v[100][100];
int n, m;

void knapsackGreedy(int *w, int *p);
int maxIndex(double *a);
void knapsackDp(int *p, int *w, double *x);
int searchIndex(int x);
int highestIndex();
int maxOf(int a, int b);
void initializeTable();
void printTable();
void printArray(int *a);
void printSolution(double *x, int *p);


int main()
{
	ifstream fin;
	fin.open("knapsack input.txt");
	fin >> n >> m;
	int weight = m + 1;
	cout << "total items: " << n << " knapsack size " << m << endl;
	int p[n + 1], w[n + 1];
	double x[n + 1] = {0};
	for(int i = 0; i < n; i++) {
		fin >> w[i];
	}
	for(int i = 0; i < n; i++) {
		fin >> p[i];
	}
	cout << "weights:  ";
	printArray(w);
	cout << "values:   ";
	printArray(p);
	knapsackGreedy(w, p);

	n++;
	m = weight;
	for(int i = n; i > 0 ; i--) {
		p[i] = p[i - 1];
		w[i] = w[i - 1];
	}
	x[n + 1] = {0};
	p[0] = 0;
	w[0] = 0;
	initializeTable();
	knapsackDp(p, w, x);
	cout << "\ntabular method:\n";
	printTable();
	double sum = 0;
	cout << "\nx:   ";
	for(int i = 0; i < n - 1; i++) {
		printf("%.2f   ", x[i]);
	}
	cout << endl;
	for(int i = 0; i < n; i++) {
		sum += 1.0 * x[i] * p[i + 1];
	}
	cout << "\nmaximized value: " << sum << endl;
}

void knapsackGreedy(int *w, int *p)
{
	double pdivw[n];
	double x[n] = {0.0};
	for(int i = 0; i < n; i++) {
		pdivw[i] = (1.0 * p[i]) / w[i];
	}
	while(m >= 0) {
		int l = maxIndex(pdivw);
		if(w[l] <= m) {
			x[l] += 1.0;
		}
		else {
			x[l] = (1.0 * m) / w[l];
		}
		pdivw[l] = -1.0;
		m -= w[l];
	}
	cout << "\nknapsack greedy solution:\n";
	double sum = 0;
	cout << "\nx:   ";
	for(int i = 0; i < n; i++) {
		printf("%.2f   ", x[i]);
	}
	cout << endl;
	for(int i = 0; i < n; i++) {
		sum += 1.0 * x[i] * p[i];
	}
	cout << "\nmaximized value: " << sum << endl;
}
int maxIndex(double *a)
{
	int idx = -1;
	double optimal = -1;
	for(int i = 0; i < n; i++) {
		if(a[i] != -1 && a[i] >= optimal) {
			optimal = a[i];
			idx = i;
		}
	}
	return idx;
}
void knapsackDp(int *p, int *w, double *x)
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
	x[maxRow - 1]++;
	while(maxProfit > 0) {
		maxProfit = maxProfit - p[maxRow];
		maxRow = searchIndex(maxProfit);
		x[maxRow - 1]++;
	}
	cout << "\nknapsack 0/1 dp solution:\n";
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
void initializeTable()
{
	for(int i = 0; i < n; i++) {
		for(int j = 0; j < m; j++) {
			v[i][j] = 0;
		}
	}
}
void printTable()
{
	for(int i = 0; i < n; i++) {
		for(int j = 0; j < m; j++)
			printf("%3d ", v[i][j]);
		cout << endl;
	}
}
void printArray(int *a)
{
	for(int i = 0; i < n; i++) {
		cout << a[i] << "  ";
	}
	cout << endl;
}
void printSolution(double *x, int *p)
{

}
