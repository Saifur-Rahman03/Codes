/* Precedence of operators */

#include <stdio.h>

main()
{
     float a,b,c,d,x;
     a = 1.;
     b = 2.;
     c = 3.;
     d = 4.;

     x = a - b / c * d;

     printf( "Result = %f\n", x);
}
