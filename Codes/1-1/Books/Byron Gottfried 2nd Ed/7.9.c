#include <stdio.h>

int maximum (int x, int y);

main( )
{
       int a, b, c, d;

       printf("a = ? ");
       scanf("%d", &a);
       printf("b = ? ");
       scanf("%d", &b);
       printf("c = ? ");
       scanf("%d", &c);

       d = maximum(a, b);

       printf("maximum = %d\n", maximum(c,d));
}
int maximum (int x, int y)
{
       int z;
       z = (x > y) ? x : y;
       return (z);
}
