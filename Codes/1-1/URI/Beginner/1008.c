#include<stdio.h>
int main ()

{
    int n,wh;
    double a,s;
    scanf("%d",&n);
    scanf("%d",&wh);
    scanf("%lf",&a);
    s=wh*a;
    printf("NUMBER = %d\n",n);
    printf("SALARY = U$ %0.2lf\n",s);
    return 0;
}
