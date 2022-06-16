#include <stdio.h>
#include <string.h>
#include <ctype.h>
#define EOF '\n'

int main( )
{
       char sin[101], sout[101];
       int n, i;

       for(i = 0; (sin[i] = getchar( )) != EOF; i++)
       ;
       n = i--;

       for(i = 0; i < n; i++)
       {
              if((toupper(sin[i]) == 'A') || (toupper(sin[i]) == 'O') || (toupper(sin[i]) == 'Y') || (toupper(sin[i]) == 'E') || (toupper(sin[i]) == 'U') || (toupper(sin[i]) == 'I'))
                     continue;
              else if((toupper(sin[i]) >= 'A') || (toupper(sin[i]) <= 'Z'))
                     printf(".%c", tolower(sin[i]));
       }
       printf("\n");
       return 0;
}
