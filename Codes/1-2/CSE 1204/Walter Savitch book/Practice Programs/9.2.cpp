#include <iostream>
using namespace std;
int main( )
{
       typedef double *avgptr;
       int i, sum = 0, n;
       double avg;
       avgptr a;

       cout << "Enter no. of elements: ";
       cin >> n;
       cout << endl;

       a = new double[n];

       cout << "Enter numbers\n";
       for(i = 0; i < n; i++)
              cin >> a[i];
       cout << endl;

       for(i = 0; i < n; i++)
              sum += a[i];
       avg = sum / n;

       cout << "Average = " << avg << endl;

       delete [ ] a;

       return 0;
}
