#include <stdio.h>
#include <math.h>

main()
{
       double p, r, n, i, f;

       printf("Please enter a value for the principal (P): ");
       scanf("%lf", &p);
       printf("Please enter a value for the interest rate (r): ");
       scanf("%lf", &r);
       printf("Please enter a value for the number of years (n): ");
       scanf("%lf", &n);

       i = r / 100;
       f = p * pow((1+i),n);

       printf("\nTotal amount: %.2lf\n", f);
       printf("Interest: %.2lf\n", f-p);

}
