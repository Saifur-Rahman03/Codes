#include <iostream>

using namespace std;

void sort(int &a, int &b, int &c);
void swap(int &a, int &b);

int main( )
{
       int n1, n2, n3;
       cout << "Enter three numbers\n";
       cin >> n1 >> n2 >> n3;

       cout << "Numbers before sorting\n" << n1 << " " << n2 << " " << n3 <<endl;
       sort(n1, n2, n3);
       cout << "Numbers after sorting\n" << n1 << " " << n2 << " " << n3 <<endl;
       return 0;
}
void sort(int &a, int &b, int &c)
{
       if(a < b)
              swap(a, b);
       if(a < c)
              swap(a, c);
       if(b < c)
              swap(b, c);

       return;
}
void swap(int &a, int &b)
{
       int temp;
       temp = a;
       a  = b;
       b = temp;

       return;
}
