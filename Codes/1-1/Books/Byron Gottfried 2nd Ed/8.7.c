#include <stdio.h>

long int fibonacci (int count);

main( )
{
       int n, count;

       printf("How many Fibonacci numbers?\n");
       scanf("%d", &n);
       printf("\n");

       for(count = 1; count <= n; count++)
       {
              printf("\ni = %2d\tF = %ld\n", count, fibonacci(count));
       }
}
long int fibonacci (int count)
{
       static long int f1 = 1, f2 = 1;
       long int f;

       f = (count < 3) ? 1 : f1 + f2;
       f2 = f1;
       f1 = f;

       return (f);
}
