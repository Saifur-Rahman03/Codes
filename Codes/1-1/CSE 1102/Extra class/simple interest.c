#include<stdio.h>
int main()
{
    double pa,r,t,si,tb;
    printf("Enter principal amount: ");
    scanf("%lf",&pa);

    printf("Enter rate (percentage per year): ");
    scanf("%lf",&r);

    printf("Enter time limit (year) : ");
    scanf("%lf",&t);

    si=((pa*r)/100)*t;
    printf("\n");
    printf("Interest = %.2lf\n",si);

    tb=pa+si;
    printf("Total Balance = %.2lf\n",tb);

    return 0;
}
