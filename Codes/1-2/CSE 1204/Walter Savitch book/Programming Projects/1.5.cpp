#include <iostream>
using namespace std;

int main( )
{
       int i;
       char c;

       cout << "Enter a character: ";
       cin >> c;
       cout << endl;

       for(i = 0; i < 5; i++){
              if(i < 2)
                     cout << " ";
              else
                     cout << c;
       }
       cout << endl;
       for(i = 0; i < 5; i++){
              if(i == 1 || i == 4)
                     cout << c;
              else
                     cout << " ";
       }
       cout << endl;
       for(i = 0; i < 5; i++)
              cout << c << endl;
       for(i = 0; i < 5; i++){
              if(i == 1 || i == 4)
                     cout << c;
              else
                     cout << " ";
       }
       cout << endl;
       for(i = 0; i < 5; i++){
              if(i < 2)
                     cout << " ";
              else
                     cout << c;
       }
       cout << endl;


       return 0;
}
