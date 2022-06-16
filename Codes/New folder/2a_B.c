#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int n = 8; 						//global variable (chess board size)
void initialize(int a[n][n]);
void print(int a[n][n]);



int main()
{
	int a[n][n];
	char alphabet[] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h'};
	char input[2];
	printf("Please enter the square:\n");
	for(int i = 0; i < 2; i++)
		scanf("%c", &input[i]); 		//position input
	int posi, posj;

	for(int i = 0; i < n; i++) {
		char c = alphabet[i];
		char d = input[0];
		if(c == d){
			posj = i;				//converting character position to integer
		}
	}
	int e = (int)input[1];			//getting ASCII value
	posi = 56 - e; 					//converting character position to integer using ASCII value

	initialize(a);					//initializing 2D array
	if(posi == 0 && posj == 0) {
		for(int i = posi; i <= posi + 1; i++) {
			for(int j = posj; j <= posj + 1; j++) {
				a[i][j] = 1;					//top left square
			}
		}
	}
	else if(posi == n - 1 && posj == n - 1) {
		for(int i = posi - 1; i <= posi; i++) {
			for(int j = posj - 1; j <= posj; j++) {
				a[i][j] = 1;					//bottom right square
			}
		}
	}
	else if(posi == 0 && posj == n - 1) {
		for(int i = posi; i <= posi + 1; i++) {
			for(int j = posj - 1; j <= posj; j++) {
				a[i][j] = 1;					//top right square
			}
		}
	}
	else if(posi == n - 1 && posj == 0) {
		for(int i = posi - 1; i <= posi; i++) {
			for(int j = posj; j <= posj + 1; j++) {
				a[i][j] = 1;					//bottom left square
			}
		}
	}

	else if(posi == n - 1) {
		for(int i = posi - 1; i <= posi; i++) {
			for(int j = posj - 1; j <= posj + 1; j++) {
				a[i][j] = 1;					//bottom side
			}
		}
	}
	else if(posj == n - 1) {
		for(int i = posi - 1; i <= posi + 1; i++) {
			for(int j = posj - 1; j <= posj; j++) {
				a[i][j] = 1;					//right side
			}
		}
	}

	else if(posj == 0) {
		for(int i = posi - 1; i <= posi + 1; i++) {
			for(int j = posj; j <= posj + 1; j++) {
				a[i][j] = 1;					//left side
			}
		}
	}
	else if(posi == 0) {
		for(int i = posi; i <= posi + 1; i++) {
			for(int j = posj - 1; j <= posj + 1; j++) {
				a[i][j] = 1;					//top side
			}
		}
	}
	else {
		for(int i = posi - 1; i <= posi + 1; i++) {
			for(int j = posj - 1; j <= posj + 1; j++) {
				a[i][j] = 1;					//anywhere else in the board
			}
		}
	}

	print(a);									//printing kings movement options
	return 0;
}
void initialize(int a[n][n])
{
	for(int i = 0; i < n; i++) {
		for(int j = 0; j < n; j++){
			a[i][j] = 0;
		}
	}
}
void print(int a[n][n])
{
	for(int i = 0; i < n; i++) {
		for(int j = 0; j < n; j++)
			printf("%d ", a[i][j]);
		printf("\n");
	}
}

