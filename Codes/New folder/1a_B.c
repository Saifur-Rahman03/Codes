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
	for(int i = posi; i < n; i++) {
		for(int j = posj; j < n; j++) {
			a[i][j] = 1;			//assignment of 1 in the expected positions
		}
	}
	print(a);						//printing resultant chess board
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
