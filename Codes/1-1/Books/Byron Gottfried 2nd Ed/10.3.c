#include <stdio.h>

int main( )
{
       int v = 3;
       int *pv;

       pv = &v;

       printf("v = %d *pv = %d\n", v, *pv);

       *pv = 0;

       printf("v = %d *pv = %d\n", v, *pv);

       return 0;
}
