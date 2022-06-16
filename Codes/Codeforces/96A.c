#include <stdio.h>
#include <string.h>
#include <ctype.h>
#define EOF '\n'

int main( )
{
       char player[101];
       int i, n, r = 0;

       for(i = 0; (player[i] = getchar( )) != EOF; i++)
              ;
       n = i--;
       for(i = 0; i < n; i++)
       {
              if(player[i] == player[i + 1])
                    {
                      r++;
                      if(r == 6)
                            break;
                    }
              else if(player[i] != player[i + 1])
                     r = 0;
       }
       if(r >= 6)
              printf("YES\n");
       else
              printf("NO\n");

       return 0;
}
