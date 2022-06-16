#include<iostream>
#include<math.h>
using namespace std;
int detm( int mat[10][10], int n);
int main() {
	int n, d, i, j;
	int mat[10][10];
	cout << "Enter the size of the matrix:\n";
	cin >> n;
	cout << "Enter the elements of the matrix:\n";
	for (i = 0; i < n; i++)
		for (j = 0; j < n; j++)
			cin >> mat[i][j];
	cout<<"The entered matrix is:"<<endl;
	for (i = 0; i < n; i++) {
		for (j = 0; j < n; j++)
			cout << mat[i][j] <<" ";
		cout<<endl;
	}
	d = detm(mat, n);
	cout<<"determinant of the matrix is "<< d <<endl;
	if( d == 0 )
		cout<<"This matrix is not invertible as the determinant is zero";
	else
		cout<<"This matrix is invertible as the determinant is not zero";

	return 0;
}
int detm( int mat[10][10], int n) {
	int det = 0;
	int submat[10][10];
	if (n == 2)
		return ((mat[0][0] * mat[1][1]) - (mat[1][0] * mat[0][1]));
	else {
		for (int x = 0; x < n; x++) {
			int subi = 0;
			for (int i = 1; i < n; i++) {
				int subj = 0;
				for (int j = 0; j < n; j++) {
					if (j == x)
						continue;
					submat[subi][subj] = mat[i][j];
			subj++;
		}
		subi++;
		}
	det = det + (pow(-1, x) * mat[0][x] * detm( submat, n - 1 ));
	}
}
	return det;
}
