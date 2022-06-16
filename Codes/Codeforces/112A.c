#include <stdio.h>
#include <ctype.h>
#include <string.h>

#define EOF '\n'


int main( )
{
       char s1[101], s2[101], str1[101], str2[101];
       int i, n, r;

       for(i = 0; (s1[i] = getchar( )) != EOF; i++)
              ;

       n = i;

       for(i = 0; (s2[i] = getchar( )) != EOF; i++)
              ;

       for(i = 0; i < n; i++)
              str1[i] = tolower(s1[i]);

       for(i = 0; i < n; i++)
              str2[i] = tolower(s2[i]);

       r = strncmp(str1, str2, n);

       if(r == 0)
              printf("0\n");
       else if(r > 0)
              printf("1\n");
       else if(r < 0)
              printf("-1\n");

       return 0;
}
