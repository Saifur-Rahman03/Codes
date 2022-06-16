#include <stdio.h>

long int factorial (int n);

main( )
{
       int x;
       scanf("%d", &x);
       printf("factorial = %ld\n", factorial(x));
}

long int factorial (int n)
{
       int i;
       long int prod = 1;
       if(n > 1)
              for(i = 2; i <= n; i++)
                     prod *= i;
       return (prod);
}

