#include <bits/stdc++.h>
#include <vector>
using namespace std;
void sort(int *a, int n);
int main()
{
	int na, nb;
	vector <int> u;
	vector <int> is;
	vector <int> d;
	vector <int> e;
	vector <int> s;
	cout << "Enter no. of elements of set A: ";
	cin >> na;
	cout << "Enter no. of elements of set B: ";
	cin >> nb;
	int i, a[na], j, b[nb];
	cout << "Enter elements of set A: ";
	for(i = 0; i < na; i++)
		cin >> a[i];
	cout << "Enter elemenst of set B: ";
	for(i = 0; i < nb; i++)
		cin >> b[i];
	sort(a, na);
	sort(b, nb);
	i = 0; j = 0;
	while(i < na || j < nb){
		if(a[i] < b[j]){
			u.push_back(a[i]);
			i++;
		}
		else if(a[i] > b[j]){
			u.push_back(b[j]);
			j++;
		}
		else if(a[i] == b[j]){
			u.push_back(a[i]);
			i++; j++;
		}
	}
	cout << "\nUnion of A and B: ";
	for(i = 0; i < u.size(); i++)
		cout << u[i] << " ";
	cout << endl;
	i = 0; j = 0;
	while(i < na || j < nb){
		if(a[i] < b[j])
			i++;
		else if(a[i] > b[j])
			j++;
		else if(a[i] == b[j]){
			is.push_back(a[i]);
			i++; j++;
		}
	}
	cout << "\nIntersection of A and B: ";
	for(i = 0; i < is.size(); i++)
		cout << is[i] << " ";
	cout << endl;
	i = 0; j = 0;
	while(i < na || j < nb){
		if(a[i] < b[j]){
			d.push_back(a[i]);
			i++;
		}
		else if(a[i] > b[j])
			j++;
		else if(a[i] == b[j]){
			i++; j++;
		}
	}
	cout << "\nDifference of A and B: ";
	for(i = 0; i < d.size(); i++)
		cout << d[i] << " ";
	cout << endl;
	i = 0; j = 0;
	while(i < na || j < nb){
		if(a[i] > b[j]){
			e.push_back(b[j]);
			j++;
		}
		else if(a[i] < b[j])
			i++;
		else if(a[i] == b[j]){
			i++; j++;
		}
	}
	cout << "\nDifference of B and A: ";
	for(i = 0; i < e.size(); i++)
		cout << e[i] << " ";
	cout << endl;
	i = 0; j = 0;
	while(i < d.size() || j < e.size()){
		if(d[i] < e[j]){
			s.push_back(d[i]);
			i++;
		}
		else if(d[i] > e[j]){
			s.push_back(e[j]);
			j++;
		}
		else if(d[i] == e[j]){
			s.push_back(d[i]);
			i++; j++;
		}
	}
	cout << "\nSymmetric Difference of A and B: ";
	for(i = 0; i < s.size(); i++)
		cout << s[i] << " ";
	cout << endl;

	return 0;
}
void sort(int *a, int n)
{
	int i, j, t;
	for(i = 0; i < n - 1; i++){
		for(j = 0; j < n - 1 - i; j++){
			if(a[j] > a[j + 1]){
				t = a[j];
				a[j] = a[j + 1];
				a[j + 1] = t;
			}
		}
	}
}
