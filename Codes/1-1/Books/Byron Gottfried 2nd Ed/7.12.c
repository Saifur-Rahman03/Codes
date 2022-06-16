#include <stdio.h>

int modify (int a);

main ( )

{
       int a = 2;
       printf("\na = %d\n", a);
       modify(a);
       printf("\na = %d\n", a);
}

int modify (int a)
{
       a *= 3;
       printf("\na = %d\n", a);
}
