#include <iostream>
#include <string>


using namespace std;

int main( )
{
       string s;
       int i, n, j, flag = 0;

       cin >> s;

       n = s.length( );
       for(i = 0, j = n - 1; i < n / 2; i++, j--)
              if(s[i] != s[j]){
                     flag = 0;
                     break;
                     }
              else
                     flag = 1;

              if(flag == 1)
                     cout << s << " is a palindrome\n";
              else
                     cout << s << " is not a palindrome\n";

       return 0;
}
