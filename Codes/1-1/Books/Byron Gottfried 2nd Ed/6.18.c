#include <stdio.h>

main( )
{
       int n, count, loops, loopcount;
       double x, average, sum = 0;

       printf("How many lists ? ");
       scanf("%d", &loops);

       for(loopcount = 0; loopcount < loops; loopcount++)
       {
              printf("\nHow many numbers ? ");
              scanf("%d", &n);
              printf("\nList Number %d\n", loopcount + 1);
              for(count = 0; count < n; count++)
              {
                     printf("x = ? ");
                     scanf("%lf", &x);

                     sum += x;
              }

              average = sum / (1.0 * n);

              printf("\nAverage = %.2lf\n\n", average);
       }
}
