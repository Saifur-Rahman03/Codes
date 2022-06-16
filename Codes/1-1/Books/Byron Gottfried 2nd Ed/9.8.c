#include <stdio.h>

main( )
{
       int n, i;
       double avg, d, sum = 0;
       double list[100];

       printf("How many numbers will be averaged?\n");
       scanf("%d", &n);
       printf("\n");

       for(i = 0; i < n; i++){
              printf("i = %d\tx = ", i + 1);
              scanf("%lf", &list[i]);
              sum += list[i];
       }

       avg = sum / n;
       printf("\nThe average is %5.2lf\n\n", avg);

       for(i = 0; i < n; i++){
              d = list[i] - avg;
              printf("i = %d\tx = %5.2lf\td = %5.2lf\n", i + 1, list[i], d);
       }
}
