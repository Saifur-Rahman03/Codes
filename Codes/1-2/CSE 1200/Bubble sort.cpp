#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main( )
{
       int arr[30000];
       int i, j, n;

       srand( (unsigned) time(0));
       for(i = 0; i < 30000; i++)
              arr[i] = rand( ) % 100 + 1;
       for(i = 0; i < 30000; i++)
              cout << arr[i] << " ";

       return 0;
}
