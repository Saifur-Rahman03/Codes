#include <iostream>
using namespace std;
int main()
{
    long long int i = 1, sum = 0;
    long long int n, m;
    cin >> n >> m;
    while(i < n || i < m)
    {
        if(n % i == 0 && m % i == 0)
        {
		sum += i;
        }
        i++;
    }
    cout << sum << endl;
    return 0;
}
