#include <bits/stdc++.h>

using namespace std;


int main()
{
    vector<vector<int>> matrix1 = {
                        {112, 42, 83, 119},
                        {56, 125, 56, 49},
                        {15, 78, 101, 43},
                        {62, 98, 114, 108}
                        };
    vector<vector<int>> matrix2 = {
                        {107, 54, 128, 15},
                        {12, 75, 110, 138},
                        {100, 96, 34, 85},
                        {75, 15, 28, 112}
                        };
    int rows, cols;
    int sum = 0, maxVal = 0;
    vector<vector<int>> matrix = matrix1;

    rows = matrix.size(), cols = matrix[0].size();


    for(int i = 0; i < rows/2; i++) {
        for (int j = 0; j < cols/2; j++) {
            maxVal = matrix[i][j];
            if(matrix[i][cols - 1 - j] > maxVal) {
                maxVal = matrix[i][cols - 1 - j];
            }
            if(matrix[rows - 1 - i][j] > maxVal) {
                maxVal = matrix[rows - 1 - i][j];
            }
            if(matrix[rows - 1 - i][cols - 1 - j] > maxVal) {
                maxVal = matrix[rows - 1 - i][cols - 1 - j];
            }
            matrix[i][j] = maxVal;
        }
    }

    for(int i = 0; i < rows/2; i++) {
        for (int j = 0; j < cols/2; j++) {
            sum += matrix[i][j];
        }
    }
    cout << sum << endl;
}
