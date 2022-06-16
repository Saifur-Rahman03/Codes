#include<stdio.h>

main()
{
       int count = 1, n;
       double sum = 0, x, average;

       printf("How many numbers ? ");
       scanf("%d", &n);

       while(count <= n)
       {
              printf("x = ");
              scanf("%lf", &x);
              sum += x;
              count++;
       }

       average = sum / n;

       printf("\nThe sum is %.2lf\n", sum);
       printf("The average is %.2lf\n", average);
}
