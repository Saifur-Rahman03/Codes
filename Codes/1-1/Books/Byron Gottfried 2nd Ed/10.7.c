#include <stdio.h>

void func1(int u, int v);
void func2(int *pu, int *pv);

int main( )
{
       int u = 1, v = 3;

       printf("Before calling the function: u = %d   v = %d\n", u, v);
       func1(u, v);
       printf("After calling the function: u = %d   v = %d\n", u, v);

       printf("\nBefore calling the function: u = %d  v = %d\n", u, v);
       func2(&u, &v);
       printf("Before calling the function: u = %d  v = %d\n", u, v);

       return 0;
}

void func1(int u, int v)
{
       u = 0;
       v = 0;
       printf("Within the function: u = %d   v = %d\n", u, v);

       return;
}

void func2(int *pu, int *pv)
{
       *pu = 0;
       *pv = 0;
       printf("Within the function: *pu = %d   *pv = %d\n", *pu, *pv);

       return;
}
