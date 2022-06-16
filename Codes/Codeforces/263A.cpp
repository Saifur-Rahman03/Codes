#include <iostream>
#include <math.h>
using namespace std;

int main()
{
	int i, j;
	int mat[10][10];
	int pos1, pos2, mov;

	for(i = 0; i < 5; i++)
		for(j = 0; j < 5; j++)
			cin >> mat[i][j];
	for(i = 0; i < 5; i++)
		for(j = 0; j < 5; j++)
			if(mat[i][j] == 1){
				pos1 = i + 1;
				pos2 = j + 1;
			}
	mov = fabs(3 - pos1) + fabs(3 - pos2);
	cout << mov << endl;

	return 0;
}
