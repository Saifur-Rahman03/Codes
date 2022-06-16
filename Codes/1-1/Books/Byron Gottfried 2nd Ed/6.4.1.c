#include <stdio.h>
#include <math.h>

main()
{
       double x, sumsq = 0, sum = 0, sumsqrt = 0;

       printf("To stop enter 0 as the value of x\n");
       printf("x = ? ");
       scanf("%lf", &x);

       while(x != 0)
       {
              sum += x;
              sumsq +=  x * x;
              sumsqrt += sqrt(x);
              printf("x = ? ");
              scanf("%lf", &x);
       }
       printf("\nsum = %.2lf\nsum of squares = %.2lf\nsum of roots = %.2lf\n", sum, sumsq, sumsqrt);
}
