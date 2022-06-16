#include <iostream>
#include <fstream>
using namespace std;
double del[5][5];
double p, p1, x, x0, h, s, xn;
int i, j, n1, n2;
double fact(int n);
void forwardDifference();
void backwardDifference();
int main()
{
	int n1 = 5;
	ifstream fi;
	fi.open("newton's formula.txt");
	for(i = 0; i < n1; i++)
		fi >> del[0][i];
	for(i = 0; i < n1; i++)
		fi >> del[1][i];
	for(i = 2; i <= n1; i++){
		for(j = 0; j <= n1; j++){
			del[i][j] = del[i - 1][j + 1] - del[i - 1][j];
		}
	}
	for(j = 0; j < n1; j++){
		for(i = 0; i <= n1 - j; i++){
			cout << del[i][j] << "\t";
		}
		cout << endl;
	}
/*	s = del[1][0];
	s += p * del[2][0];
	p1 = p * (p - j);
	for(int i = 2; i < n - 1; i++){
		s += (p1 / fact(i)) * del[i + 1][0];
		j++;
		p1 *= (p - j);
		cout << s << endl;
		}
	cout << "Result: " << s << endl;*/
	forwardDifference();
	backwardDifference();
}
double fact(int n)
{
	double f = 1.0;
	for(int i = 1; i <= n; i++){
		f *= i;
	}
	if(n == 0)
		return 1;
	else
		return f;
}
void forwardDifference()
{
	x = 0.12, x0 = 0.10, h = 0.05, p;
	p = (x - x0) / h;
	j = 1;
	s = del[1][0];
	s += p * del[2][0];
	p1 = p * (p - j);
	n1 = 5;
	for(i = 2; i < n1 - 1; i++){
		s += (p1 / fact(i)) * del[i + 1][0];
		j++;
		p1 *= (p - j);
	}
	cout << "forward formula: ";
	cout << s << endl;
}
void backwardDifference()
{
	x = 0.26, xn = 0.30, h = 0.05;
	p = (x - xn) / h;
	int k = 4;
	s = del[1][k];
	k--;
	s +=  (p * del[2][k]);
	k--;
	j = 1;
	p1 = p * (p + j);
	for(i = 2; i < 3; i++){
		s += (p1 / fact(i)) * del[i + 1][k];
		j++;
		k--;
		p1 *= (p + j);

	}
	cout << "Backward formula: ";
	cout << s << endl;
}
