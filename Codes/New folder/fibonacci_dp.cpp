#include <bits/stdc++.h>
using namespace std;

int c = 0;
int dp_count = 0;
int fibonacci(int n);
int fibonacci_dp(int *a, int n);

int main()
{
    int n;
    cin >> n;
    int a[n + 1];
    for(int i = 0; i < n + 1; i++)
        a[i] = -1;

    cout << "fib: " << fibonacci(n) << endl;
    cout << "fib_dp: " << fibonacci_dp(a, n) << endl;
    cout << "functions called (dp): " << dp_count << endl;
    cout << "functions called: " << c << endl;

}

int fibonacci_dp(int *a, int n)
{
    if(a[n] != -1)
        return a[n];

    if(n <= 1)
        return n;
    else
    {
        dp_count++;
        //cout << "fib(" << n << ")" << endl;
        a[n] = fibonacci_dp(a, n - 1) + fibonacci_dp(a, n - 2);
        return (a[n]);
    }

}

int fibonacci(int n)
{

    if(n <= 1)
        return n;
    else
    {
        c++;
        //cout << "fib(" << n << ")" << endl;
        return (fibonacci(n - 1) + fibonacci(n - 2));
    }

}
