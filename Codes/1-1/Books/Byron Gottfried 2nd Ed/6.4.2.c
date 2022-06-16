#include <stdio.h>
#include <math.h>

main()
{
       double x, sumsq = 0, sum = 0, sumsqrt = 0;
       double a[100], b[100], c[100];
       int i = 0, j = 0, k = 0, y;

       printf("To stop enter 0 as the value of x\n");
       printf("x = ? ");
       scanf("%lf", &x);

       while(x != 0)
       {
              a[i] = x;
              sum += x;

              b[i] = x * x;
              sumsq +=  x * x;

              c[i]= sqrt(x);
              sumsqrt += sqrt(x);

              i++;

              printf("x = ? ");
              scanf("%lf", &x);
       }
       printf("\n\n");

       printf("\tNUMBERS\n");
       for(y=0; y < i; y++)
              printf("x = %15.2lf\n", a[y]);
       printf("\nsum of numbers = %.2lf\n\n", sum);

       printf("\tSQUARES\n");
       for(y=0; y < i; y++)
              printf("x * x = %15.2lf\n", b[y]);
       printf("\nsum of squares = %.2lf\n\n", sumsq);

       printf("\tROOTS\n");
       for(y=0; y < i; y++)
              printf("sqrt(x) = %15.2lf\n", c[y]);
       printf("\nsum of roots = %.2lf\n\n", sumsqrt);

}
