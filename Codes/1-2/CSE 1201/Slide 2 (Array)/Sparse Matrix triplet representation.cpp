#include <iostream>
using namespace std;
int m = 5, n = 6;
void showMat(int a[5][6]);
int main( )
{
	int a[5][6] = {0, 0, 0, 0, 9, 0, 0, 8, 0, 0, 0, 0, 4, 0, 0, 2, 0, 0, 0, 0, 0, 0, 5, 0, 0, 2, 0, 0, 0};
	int s[8][4];
	int i, j, k = 0;

	cout << "Sparse Matrix\n";
	showMat(a);
	for(i = 0; i < m; i++){
		for(j = 0; j < n; j++){
			if(a[i][j] != 0){
				k++;
				s[k][0] = i;
				s[k][1] = j;
				s[k][2] = a[i][j];
			}
		}
	}
	s[0][0] = --m;
	s[0][1] = --n;
	s[0][2] = k;

	cout << "\n\nTriplex Representation\n";
	cout << "Rows Columns Values\n";
	for(i = 0; i <= k; i++){
		for(j = 0; j < 3; j++)
			cout << s[i][j] << "\t";
		cout << endl;
	}

	return 0;
}
void showMat(int a[5][6])
{
	for(int i = 0; i < m; i++){
		for(int j = 0; j < n; j++)
			cout << a[i][j] << "   ";
		cout << endl;
	}
}
