#include <stdio.h>

main( )
{
       int n, navg = 0;
       double x, sum = 0, avg;

       printf("How many numbers? ");
       scanf("%d", &n);

       while(n > 0){
              printf("x = ? ");
              scanf("%lf", &x);
              if(x < 0){
                     n--;
                     continue;}
              sum += x;
              navg++;
              n--;
       }
       avg = sum / navg;
       printf("The average of nonnegative numbers is %.2lf\n", avg);
}
