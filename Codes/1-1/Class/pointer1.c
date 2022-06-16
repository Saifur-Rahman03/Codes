#include<stdio.h>
int main ()
{
    int x=547,*ptr;
    ptr=&x;
    printf("%d\n%d",x,*ptr);
    return 0;
}
