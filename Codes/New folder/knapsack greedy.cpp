#include <bits/stdc++.h>
#include <iostream>
#include <fstream>

using namespace std;

void knapsackGreedy(int n, int m, int o, int *w, int *p);
int optimalIndex(int n, double *a, int o);
void print(int n, int m, int o, int *w, int *p);

int main()
{
	ifstream fin;
	fin.open("knapsack greedy input.txt");
	while(!fin.eof())
	{
		int n, m, o;
		fin >> n >> m >> o;
		int w[n], p[n];
		for(int i = 0; i < n; i++){
			fin >> w[i];
		}
		for(int i = 0; i < n; i++){
			fin >> p[i];
		}

		print(n, m, o, w, p);
		knapsackGreedy(n, m, o, w, p);
		cout << endl;
	}
	return 0;
}

void print(int n, int m, int o, int *w, int *p)
{
	cout << "amount:   " << n << endl;
	cout << "knapsack weight:   " << m << endl;
	if(o == 1) {
		cout << "maximization problem\n";
	}
	else {
		cout << "minimization problem\n";
	}
	cout << "weights:\t";
	for(int i = 0; i < n; i++){
		printf("%d\t", w[i]);
		//cout << w[i] << "\t";
	}
	cout << endl;
	cout << "profits:\t";
	for(int i = 0; i < n; i++){
		printf("%d\t", p[i]);
	}
	cout << endl;
}
void knapsackGreedy(int n, int m, int o, int *w, int *p)
{
	double pdivw[n];
	double x[n] = {0.0};
	for(int i = 0; i < n; i++) {
		pdivw[i] = (1.0 * p[i]) / w[i];
	}
	while(m >= 0) {
		int l = optimalIndex(n, pdivw, o);
		if(w[l] <= m) {
			x[l] = 1.0;
		}
		else {
			x[l] = (1.0 * m) / w[l];
		}
		pdivw[l] = -1.0;
		m -= w[l];
	}
	cout << "x:      \t";
	for(int i = 0; i < n; i++) {
		printf("%.2f\t", x[i]);
	}
	cout << endl;
	double sum = 0;
	for(int i = 0; i < n; i++) {
		sum += x[i] * p[i];
	}
	cout << "optimal solution: " << sum << endl;
}
int optimalIndex(int n, double *a, int o)
{
	int idx = -1;
	double optimal = -1;
	if(o == 1) {
		for(int i = 0; i < n; i++) {
			if(a[i] != -1 && a[i] >= optimal) {
				optimal = a[i];
				idx = i;
			}
		}
	}
	else if(o == 0){
		optimal = 1000;
		for(int i = 0; i < n; i++) {
			if(a[i] != -1 && a[i] <= optimal) {
				optimal = a[i];
				idx = i;
			}
		}
	}
 	return idx;
}
