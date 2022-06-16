#include <iostream>

using namespace std;

int main( )
{
       double ct1, ct2, ct3, ct4, ct;
       double temp, avg;

       cout << "CT1 Marks = ";
       cin >> ct1;
       cout << "\nCT2 Marks = ";
       cin >> ct2;
       cout << "\nCT3 Marks = ";
       cin >> ct3;
       cout << "\nCT4 Marks = ";
       cin >> ct4;
       cout << '\n';

       temp = ct1;

       temp = (temp > ct2) ? ct2 : temp;
       temp = (temp > ct3) ? ct3 : temp;

       avg = (ct1 + ct2 + ct3 + ct4 - temp) / 3;

       cout << "Average = " << avg << '\n';

       return 0;
}
