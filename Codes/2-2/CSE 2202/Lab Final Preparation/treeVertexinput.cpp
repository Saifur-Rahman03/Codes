#include<bits/stdc++.h>
using namespace std;

int t;
int c[10];
int pre[10];
int nex[10];
int X[10], Y[10];
vector <int> terminal;
vector <int> result;
int nodes;
int edges;

void lastNode();
void TVS();
void printV(vector <int> v);


int main()
{
	ifstream fin;
    	fin.open("treeVertexinput.txt");
	while(!fin.eof()) {
		terminal = {};
		result = {};
		int cost, x, y;
		fin >> nodes;
		fin >> edges;
		fin >> t;
		for(int i = 1;i <= 10; i++)
			c[i]=0;

		for(int i = 1;i <= edges; i++){
			fin >> x >> y >> cost;
			X[i] = x; Y[i] = y;
			c[y] = cost;
			pre[y] = x;
			nex[x] = y;
		}
		pre[0] = 0;
		lastNode();
		//cout << "Terminal nodes: ";
		//printV(terminal);
		TVS();

		cout << "Booster needed at vertex: ";
		printV(result);
	}

}

void lastNode()
{
//	int k = 1;
	terminal.push_back(0);
	for(int i = 1; i <= edges; i++){
		for(int j = 1; j <= edges; j++){
			if(Y[i] == X[j]){
				Y[i] = 0;
			}
		}
	}
	for(int i = 1; i <= edges; i++){
		if(Y[i] != 0)
			terminal.push_back(Y[i]);
	}
}

void TVS()
{
	int i = 1;
	int C;
	C = 0;
	int length = terminal.size();
	do{
		C += c[terminal[length - i]];
		cout << terminal[length - i] << " " << pre[terminal[length - i]]  << " " << c[terminal[length - i]] << endl;
		if(C > t){
			result.push_back(terminal[length - i]);
			cout << terminal[length - i] << " " << c[terminal[length - i]] << " entered" << endl ;
			c[nex[terminal[length - i]]] = 0;
			c[terminal[length - i]] = 0;
			//cout << nex[terminal[length - i]] << " " << c[nex[terminal[length - i]]]  << "duh "<< endl;
			C = 0;
			i++;
			//terminal[length - i] = pre[terminal[length - i]];
			cout << pre[terminal[length - i]] << endl;
		}
		else{
			terminal[length - i] = pre[terminal[length - i]];
		}
		if(terminal[length - i] == 0){
			C = 0;
			i++;
		}
	}while(i <= length);
}

void printV(vector <int> v)
{

	for(int i = 0; i < v.size(); i++)
		cout << v[i] << " ";
	cout << endl;
}
