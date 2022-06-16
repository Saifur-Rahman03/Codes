#include <bits/stdc++.h>
#include <fstream>
using namespace std;

typedef struct
{
	float pdivw;
	int track;
}items;

vector <float> x;
vector <float> w;
vector <float> p;
void GreedyKnapsack(int m, int n);

int part(items a[], int l, int h);
void quickSort(items a[], int l, int h);
void swapValues(items *a, items *b);

int main()
{
	ifstream fin;
	fin.open("knapsack input.txt");
	int i, n, m, t = 0;
	fin >> n;
	fin >> m;
	float weight[n], profit[n];
	items pwt[n];
	for(int i = 0; i < n; i++){
		fin >> weight[i];
	}
	for(int i = 0; i < n; i++){
		fin >> profit[i];
	}
	cout << "total elements, n = " << n << endl;
	cout << "capacity, m = " << m << endl;
	cout << "\nweights:\n";
	for(int i = 0; i < n; i++){
		cout << weight[i] << " ";
	}
	cout << endl;
	cout << "profits:\n";
	for(int i = 0; i < n; i++){
		cout << profit[i] << " ";
	}
	cout << endl;

	for(i = 0; i < n; i++){
		pwt[i].pdivw = profit[i] / weight[i];
		pwt[i].track = i;
	}
	cout << "\nprofit per unit:\n";
	for(i = 0; i < n; i++){
		cout << pwt[i].pdivw << "\t";
	}
	cout << endl;
	cout << "track:\n";
	for(i = 0; i < n; i++){
		cout << pwt[i].track << "\t";
	}
	cout << endl;
	quickSort(pwt, 0, n - 1);
	cout << endl;
	cout << "\nsorted by profit per unit:\n";
	for(i = 0; i < n; i++){
		cout << pwt[i].pdivw << "\t";
	}
	cout << endl;
	cout << "track:\n";
	for(i = 0; i < n; i++){
		cout << pwt[i].track << "\t";
	}
	cout << endl;

	for(i = 0; i < n; i++){
		w.push_back(weight[pwt[i].track]);

	}
	for(i = 0; i < n; i++)
		p.push_back(profit[pwt[i].track]);
	cout << "\nsorted weight by profit per unit:\n";
	for(i = 0; i < n; i++)
		cout << w[i] << "\t";
	cout << endl;
	cout << "profit:\n";
	for(i = 0; i < n; i++)
		cout << p[i] << "\t";
	cout << endl;
	GreedyKnapsack(m, n);

	return 0;
}


int part(items a[], int l, int h)
{
	int i, j;
	float pivot;
	pivot = a[l].pdivw;
	i = l;
	j = h;
	do{
		do{
			i++;
		} while(a[i].pdivw > pivot);
		do{
			j--;
		}while(a[j].pdivw < pivot);
		if(i < j){
			swapValues(&a[i], &a[j]);
		}
	}while(i < j);
	swapValues(&a[l], &a[j]);
	return j;
}

void quickSort(items a[], int l, int h)
{
	int p;
	if(l < h){
		p = part(a, l, h + 1);
		quickSort(a, l, p - 1);
		quickSort(a, p + 1, h);
	}
}

void swapValues(items *a, items *b)
{
	items t;
	t = *a;
	*a = *b;
	*b = t;
}

void GreedyKnapsack(int m, int n)
{
	int i;
	float sum = 0.0;
	for(i = 0; i < n; i++)
		x.push_back(0.0);
	int U = m;
	for(i = 0; i < n; i++){
		if(w[i] > U)
			break;
		x[i] = 1.0;
		U = U - w[i];
	}
	if(i < n)
		x[i] = U / w[i];

	cout << "\nKnapsack solution:\n";
	for(int i = 0; i < n; i++)
		cout << x[i] << "\t";
	cout << endl;
	for(i = 0; i < n; i++)
		sum += p[i] * x[i];
	cout << "\nTotal profit: " << sum << endl;

}
