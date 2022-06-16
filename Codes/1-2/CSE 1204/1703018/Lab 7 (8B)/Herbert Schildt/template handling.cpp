#include <iostream>
using namespace std;

template <class X> void swapargs(X &a, X &b)
{
    X temp;
    temp = a;
    a = b;
    b = temp;
}

int main()
{
    int i = 10, j = 20;
    float x = 10.10, y = 20.20;

    cout << "i = " << i << " j = " << j << endl;
    swapargs(i, j);
    cout << "i = " << i << " j = " << j << endl;

    cout << "x = " << x << " y = " << y << endl;
    swapargs(x, y);
    cout << "x = " << x << " y = " << y << endl;
}
