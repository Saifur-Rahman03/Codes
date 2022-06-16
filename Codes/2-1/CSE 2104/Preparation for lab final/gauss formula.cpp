#include <iostream>
#include <fstream>
using namespace std;
double del[7][7];
void forwardDifference();
void backwardDifference();
double fact(int x);
int n = 7;
double p, s;
int main()
{
	ifstream fi;
	int i, j;
	fi.open("gauss.txt");
	for(i = 0; i < n; i++)
		fi >> del[0][i];
	for(i = 0; i < n; i++)
		fi >> del[1][i];
	for(i = 2; i <= n; i++){
		for(j = 0; j <= n - i; j++){
			del[i][j] = del[i - 1][j + 1] - del[i - 1][j];
		}
	}
	for(j = 0; j < n; j++){
		for(i = 0; i <= n - j; i++){
			if(del[i][j] >= 0.0001)
			cout << del[i][j] << "\t";
			else
				cout << "0\t";
		}
		cout << endl;
	}
	forwardDifference();
	backwardDifference();
}
void forwardDifference()
{
	int i, j = 0, k = 0;
	s = 0;
	p = 0.4;
	double	p1 = p;
	for(i = 1; i < n - 2; i++){
		if(i == 1){
			s += del[i][(n - i ) / 2];
			cout << del[i][(n - i ) / 2] << " ";
		}
		else if(i == 2){
			s += p * del[i][(n - i + 1) / 2];
			cout << del[i][(n - i + 1) / 2] << " ";
			}
		else if(i % 2 == 0){
			p1 *= (p + j); j++;
			s += (p * del[i][(n - i ) / 2]) / fact(i - 1);
			cout << del[i][(n - i ) / 2] << " ";
		}
		else if(i % 2 != 0){
			p1 *= (p - k); k++;
			s += (p * del[i][(n - i) / 2]) / fact(i - 1);
			cout << del[i][(n - i ) / 2] << " ";
		}
	}
	cout << "Result: " << s << endl;
}
double fact(int x)
{
	double f = 1.0;
	for(int i = 1; i <= x; i++)
		f *= i;
	if(x == 0)
		return 1;
	else
		return f;
}
void backwardDifference()
{
	int i, j = 0, k = 0;
	s = 0;
	p = 0.4;
	double p1 = p;
	for(i = 1; i < n - 2; i++){
		if(i == 1){
			s += del[i][(n - i ) / 2];
			cout << del[i][(n - i ) / 2] << " ";
		}
		else if(i == 2){
			s += p * del[i][(n - i) / 2];
			cout << del[i][(n - i ) / 2] << " ";
			}
		else if(i % 2 == 0){
			p1 *= (p - j); j++;
			s += (p * del[i][(n - i - 1) / 2]) / fact(i - 1);
			cout << del[i][(n - i - 1) / 2] << " ";
		}
		else if(i % 2 != 0){
			p1 *= (p + k); k++;
			s += (p * del[i][(n - i) / 2]) / fact(i - 1);
			cout << del[i][(n - i ) / 2] << " ";
		}
	}
	cout << "Result: " << s << endl;

}
