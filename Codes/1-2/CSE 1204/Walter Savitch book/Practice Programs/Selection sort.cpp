#include <iostream>
using namespace std;

int main( )
{
       int i, j, key, n, count = 0;
       int a[100];

       cout << "Enter no. of array elements: ";
       cin >> n;
       cout << "Enter array elements\n";
       for(i = 0; i < n; i++)
              cin >> a[i];
       cout << endl;

       for(i = 1; i < n; i++)
       {
              key = a[i];
              j = i - 1;

              while(j >= 0 && a[j] > key){
                     a[j + 1] = a[j];
                     j--;
                     count++;
              }
              a[j + 1] = key;
       }
       cout << "Sorted Array\n";
       for(i = 0; i < n; i++)
              cout << a[i] << " ";
       cout << endl;
       cout << "No. of swaps = " << count << endl;

       return 0;
}
