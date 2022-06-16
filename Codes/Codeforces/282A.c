#include <stdio.h>

int main( )
{
       int x = 0, n, i;
       char c[4];

       scanf("%d", &n);

       while(n){
              for(i = 0; i < 4; i ++)
                     scanf("%c", &c[i]);

              if((c[0] == '+') || (c[2] == '+'))
                     x++;

              if((c[0] == '-') || (c[2] == '-'))
                    x--;

              n--;
       }

       printf("%d\n", x);

       return 0;
}
