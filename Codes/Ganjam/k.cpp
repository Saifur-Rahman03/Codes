#include <iostream>
using namespace std;
int main()
{
    int t, n, j;
    cin >> t;
    int i = 0, sum = 0, count;
    for(int k = 0; k < t; k++)
    {
        cin >> n;
        int a[n];
        for(j = 0; j < n; j++)
            cin >> a[j];
        while(1)
        {
            if(sum + a[i] >= n)
            {
                if(i == n- 1)
                    break;
                if(sum <= n)
                {
                    sum++;
                }
                i++;

            }
            else if(sum < n)
            {
                sum += a[i];
                i += a[i];
                if(i >= n- 1)
                    break;
            }
        }
        cout << sum << endl;
    }
}
