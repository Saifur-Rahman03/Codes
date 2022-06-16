#include <stdio.h>
#include <math.h>

main()
{
       double a, b, c, d, e, x1, x2;

       printf("a = ? ");
       scanf("%lf", &a);
       printf("b = ? ");
       scanf("%lf", &b);
       printf("c = ? ");
       scanf("%lf", &c);

       d = (b * b - 4 * a * c);
       e = sqrt(d);
       if(d >= 0){
              x1 = (-b + e) / (2 * a);
              x2 = (-b - e) / (2 * a);
              printf("x1 = %e\nx2 = %e\n", x1, x2);
              }
       else
              printf("\nMath Error\n");
}
