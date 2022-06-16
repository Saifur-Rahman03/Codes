#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long int t, x, y, z, a, b, c, flag = 1;
    cin >> t;
    while(t--)
    {
        cin >> x >> y >> z;
	 flag = 1;

        if(x == y || y == z || z == x)
        {
            if(x == y && y == z && z == x)
            {
                a = x;
                b = x;
                c = x;
            }
            else if(x == y && x > z)
            {
                a = x;
                b = z;
                c = z;
            }
            else if(x == z && x > y)
            {
                a = y;
                b = x;
                c = y;
            }
            else if(z == y && z > x)
            {
                a = x;
                b = x;
                c = z;
            }
            else
            {
                flag = 0;
            }
            if(flag == 0)
            {
                cout << "NO" << endl;
            }
            else
            {
                cout << "YES" << endl;
                cout << a << " " << b << " " << c << endl;
            }
        }
        else
        {
            cout << "NO" << endl;
        }
    }

}
