#include <stdio.h>

int main( )
{
       int a, b, c;
       int n, p = 0;

       scanf("%d", &n);

       while(n)
       {
              scanf("%d %d %d", &a, &b, &c);

              if((a + b + c) >= 2)
                     p++;

              n--;
       }
       printf("%d\n", p);
       return 0;
}
