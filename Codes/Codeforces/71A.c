#include <stdio.h>
#include <ctype.h>
#include <string.h>
#define EOF '\n'

int main()
{
       int n, i;
       int count;
       char word[100];

       scanf("%d ", &n);

       while(n)
       {
              for(count = 0; (word[count] = getchar( )) != EOF; ++count)
              ;
              i = count;
              if(count > 10)
              {
                     printf("%c%d%c\n", word[0], (i - 2), word[i - 1]);
              }
              else{
                     for(count = 0; count < i; count++)
                            printf("%c", word[count]);
                     printf("\n");
                     }
              n--;
       }
       return 0;
}
