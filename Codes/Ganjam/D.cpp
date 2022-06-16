#include <iostream>
using namespace std;
int main()
{
    int t, j,n;
    int a[1000];
    cin >> t;
    int i = 0, sum = 0, count;
    while(t)
    {
        cin >> n;
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
        t--;
    }
    return 0;
}
