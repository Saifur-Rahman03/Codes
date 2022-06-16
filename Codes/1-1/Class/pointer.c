#include<stdio.h>
int main()
{
    int a,*b;
    a=10;
    b=&a;
    printf("%d\n%d",a,*b);
    return 0;
}
