#include <fstream>
#include <iostream>

using namespace std;

int main( )
{
       ifstream in;
       ofstream out;

       in.open("6.1in.txt");
       if(in.fail( )){
              cout << "Opening failed\n";
       }
       out.open("6.1out.txt");
       if(out.fail( )){
              cout << "Opening failed\n";
       }

       int a[100], tag, i = 0;
       int n1, n2, n3, n4, n5, n6, n7, n8, n9, n0;

       n1 = n2 = n3 = n4 = n5 = n6 = n7 = n8 = n9 = n0 = 0;

       while(! in.eof( )){
              in >> a[i++];
       }

       tag = i;
       for(i = 0; i < tag; i++){
              if(a[i] == 0)
                     n0++;
              if(a[i] == 1)
                     n1++;
              if(a[i] == 2)
                     n2++;
              if(a[i] == 3)
                     n3++;
              if(a[i] == 4)
                     n4++;
              if(a[i] == 5)
                     n5++;
              if(a[i] == 6)
                     n6++;
              if(a[i] == 7)
                     n7++;
              if(a[i] == 8)
                     n8++;
              if(a[i] == 9)
                     n9++;
       }
       out  << "No. of 0 = " << n0 << endl
              << "No. of 1 = " << n1 << endl
              << "No. of 2 = " << n2 << endl
              << "No. of 3 = " << n3 << endl
              << "No. of 4 = " << n4 << endl
              << "No. of 5 = " << n5 << endl
              << "No. of 6 = " << n6 << endl
              << "No. of 7 = " << n7 << endl
              << "No. of 8 = " << n8 << endl
              << "No. of 9 = " << n9 << endl;

       in.close( );
       out.close( );

       cout << "Done\n";

       return 0;
}
