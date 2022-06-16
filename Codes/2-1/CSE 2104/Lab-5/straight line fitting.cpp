#include <iostream>
using namespace std;
int main()
{
    double x[5] = {0, 1, 2, 3, 4}, fx[5] = {1.0, 2.9, 4.8, 6.7, 8.6};
    double x2[5], xy[5], sumx = 0, sumy = 0, sumx2 = 0, sumxy = 0, a0, a1;
    int i, j, n = 5;
    for(i = 0; i < 5; i++)
    {
        x2[i] = x[i] * x[i];
        xy[i] = x[i] * fx[i];
        sumx += x[i];
        sumy += fx[i];
        sumx2 += x2[i];
        sumxy += xy[i];
    }
    cout << "x\ty\tx^2\txy\n";
    for(i = 0; i < 5; i++)
    {
        cout << x[i] << "\t" << fx[i] << "\t" << x2[i] << "\t" << xy[i] << "\n";
    }
    cout << "sum:\n";
    cout << sumx << "\t" << sumy << "\t" << sumx2 << "\t" << sumxy << "\n";
    cout << "\nEquation:\n";
    cout << n << "a0 + " << sumx << "a1 = " << sumy << endl;
    cout << sumx << "a0 + " << sumx2 << "a1 = " << sumxy << endl;
    a0 = ((sumx * (-1 *sumxy)) - ((-1 *sumy) * sumx2)) / ((n * sumx2) - (sumx * sumx));
    a1 =  ((sumx * (-1 * sumy)) - ((n * (-1 * sumxy)))) / ((n * sumx2) - (sumx * sumx));
    cout << "\na0: " << a0 << endl << "a1: " << a1 << endl;
    return 0;
}
