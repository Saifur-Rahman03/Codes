#include <iostream>
using namespace std;
int main()
{
    double X[5] = {0, 1, 3, 4, 5};
    double fx[5] = {0, 1, 81, 256, 625};
    double y = 0, x, x0 = X[0];
    int i, j;
    cout << "Enter the value of x: ";
    cin >> x;
    for(i = 0; i < 5; i++)
    {
        y += ((x - X[(i + 1) % 5]) * (x - X[(i + 2) % 5]) * (x - X[(i + 3) % 5]) * (x - X[(i + 4) % 5]))
             / ((X[i] - X[(i + 1) % 5]) * (X[i] - X[(i + 2) % 5]) * (X[i] - X[(i + 3) % 5]) * (X[i] - X[(i + 4) % 5])) * fx[i];
    }
    cout << "Result: " << y << endl;

    return 0;
}
