#include <iostream>
using namespace std;

int main( )
{
    int i, n, x, pos;
    double arr[100], temp;

    cout << "How many numbers? ";
    cin >> n;

    cout << "\nEnter numbers\n";

    for(i = 0; i < n; i++)
        cin >> arr[i];

    cout << "\nEnter the number you want to search ";
    cin >> x;

    for(i = 0; i < n; i++)
        if(arr[i] == x)
            pos = i;

    cout << "\nThe number is on " << pos + 1 << "th position" << endl;


    return 0;
}

