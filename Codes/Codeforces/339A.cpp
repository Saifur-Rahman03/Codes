#include <iostream>
#include <string>

using namespace std;

int main( )
{
       string s;
       char temp;

       int l, i , j;

       cin >> s;

       l = s.length( );

	for(i = 0; i < l; i += 2){
              for(j = i + 2; j < l; j += 2){
                     if(s[i] > s[j]){
                            temp = s[i];
                            s[i] = s[j];
                            s[j] = temp;
                     }
              }
	}
       for(i = 0; i < l; i++)
              cout << s[i];
       cout << endl;

       return 0;
}
