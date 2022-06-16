#include <stdio.h>
#include <math.h>

int main( )
{
     int n, m, a;
     double a1, a2, num;

     scanf("%d %d %d", &n, &m, &a);

     a1 = ceil(( 1.0 * n ) / a);
     a2 = ceil(( 1.0 * m ) / a);

     num = (a1 * a2);

     printf("%.0lf\n", num);


     return 0;
}
