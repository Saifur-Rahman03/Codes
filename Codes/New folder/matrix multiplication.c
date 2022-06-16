#include <stdio.h>
#define N 10

//declaration of two matrices
int mat1[N][N], mat2[N][N];
//declaration of resultant matrix
int res[N][N];

int checkValid(int r, int c);				//function to check whether multiplication is possible
void multiply(int r1, int c1, int r2, int c2);	//function to multiply matrices
void printMatrix(int c, int r);				//function to print the resultant matrix

int main()
{
	int r1, c1, r2, c2;

	//input of matrix 1
	printf("row number of matrix1: ");
	scanf("%d", &r1);
	printf("column number of matrix1: ");
	scanf("%d", &c1);

	//input of matrix 2
	printf("row number of matrix1: ");
	scanf("%d", &r2);
	printf("column number of matrix1: ");
	scanf("%d", &c2);

	//If col no of mat1 and row no of mat2 doesn't equal
	//then matrix multiplication is not possible
	if(!checkValid) {
		printf("\n\nDimension Error!\n\nMatrix multiplication is not possible\n");
	}


	//input of mat1
	printf("\nEnter elements of mat1:\n");
	for(int i = 0; i < r1; i++) {
		for(int j = 0; j < c1; j++) {
			scanf("%d", &mat1[i][j]);
		}
	}

	//input of mat2
	printf("\nEnter elements of mat2:\n");
	for(int i = 0; i < r2; i++) {
		for(int j = 0; j < c2; j++) {
			scanf("%d", &mat2[i][j]);
		}
	}

	//Matrix multiplication
	multiply(r1, c1, r2, c2);

	//printing the resultant matrix
	printMatrix(r1, c2);

	return 0;
}

int checkValid(int r, int c)
{
	if(c == r) {
		return 1;
	}
	return 0;
}
void multiply(int r1, int c1, int r2, int c2)
{
	int i, j, k;
	for (i = 0; i < c1; i++) {
		for (j = 0; j < r2; j++) {
			res[i][j] = 0;
			for (k = 0; k < c1; k++)
				res[i][j] += mat1[i][k] * mat2[k][j];	//multiplying mat1s rows with mat2s column
		}
	}

}
void printMatrix(int c, int r)
{
	printf("\nResultant matrix:\n");
	for (int i = 0; i < r; i++) {
		for (int j = 0; j < c; j++)
			printf("%d ", res[i][j]);
		printf("\n");
	}
}
