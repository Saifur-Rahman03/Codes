#include <iostream>
#include <stdbool.h>
#include <fstream>
using namespace std;

long long int permutaion = 0;
bool isSafe(int board[100][100], int n, int row, int col);
bool solveQueen(int board[100][100], int n, int col);
void print(int board[100][100], int n);
bool solve(int board[100][100], int n, int start);


int main()
{
	ifstream fin;
	fin.open("queen.txt");
	int board[100][100];
	int N, n;
	fin >> N;
	for(int i = 0; i < N; i++){
		permutaion = 0;
		fin >> n;

		cout << "#solution 1 (1st column):" << endl;
		solve(board, n, 0);
		cout << "#solution 2 (2nd column):" << endl;
		solve(board, n, 1);
		cout << "no of queens: " << n << "\tpermutation: "<< permutaion << endl << endl;
	}
}

bool isSafe(int board[100][100], int n, int row, int col)
{
	int i, j;
	for(i = 0; i < col; i++)
		if((board[row][i]) == 1)
			return false;
	for(i = row, j = col; i >= 0, j >= 0; i--, j--)
		if((board[i][j]) == 1)
			return false;
	for(i = row, j = col; j >= 0 && i < n; i++, j--)
		if((board[i][j]) == 1)
			return false;
	return true;
}

bool solveQueen(int board[100][100], int n, int col)
{
	permutaion++;
	if(col >= n)
		return true;

	for(int i = 0; i < n; i++){
		if(isSafe(board, n, i, col)){
			board[i][col] = 1;
			if(solveQueen(board, n, col + 1))
				return true;

			board[i][col] = 0;
		}
	}
	return false;
}
void print(int board[100][100], int n)
{
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++){
			if(board[i][j] == 1){
				printf(" Q ");
			}
			else {
				printf(" * ", board[i][j]);
			}
		}
		printf("\n");
    }
    cout << endl;
}
bool solve(int board[100][100], int n, int start)
{
	for(int j = 0; j < n; j++){
			for(int k = 0; k < n; k++){
				board[j][k] = 0;
			}
		}
		if (solveQueen(board, n, start) == false){
			cout << "No solution\n";
			return false;
		}
		print(board, n);
		return true;
}
