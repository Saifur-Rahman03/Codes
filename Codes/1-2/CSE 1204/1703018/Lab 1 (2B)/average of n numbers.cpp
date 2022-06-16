#include <iostream>
using namespace std;

int main( )
{
    int i, x, n, sum = 0;
    double avg;

    cout <<"How many numbers? ";
    cin >> n;

    for(i = 0; i < n; i++)
    {
        cout << "x = ? ";
        cin >> x;
        sum += x;
    }

    cout << "\nSum = " << sum << endl;

    avg = sum / n;

    cout << "\nAverage = " << avg << endl;


    return 0;
}
