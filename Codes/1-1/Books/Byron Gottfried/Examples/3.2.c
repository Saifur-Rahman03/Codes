/* Arithmetic Operations */

#include <stdio.h>
main()
{
     int a;
     int b;

     printf( "Enter a & b\n");
     scanf( "%d %d", &a, &b);


     a = ((a / b) * b) + (a % b);

     printf( "a + b = %d\na - b = %d\na * b = %d\na / b = %d\na % b = %d\n(a / b) * b) = %d\na = %d\n", a + b, a - b, a * b, a / b, a % b, (a / b) * b, a);

}
