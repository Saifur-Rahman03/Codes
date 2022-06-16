#include<stdio.h>
int main ()

{
    int a,b,s;
    printf("Enter two integers\n");
    scanf("%d%d",&a,&b);
    s=a-~b-1;
    printf("Sum of two integers: %d\n",s);
    return 0;
}
