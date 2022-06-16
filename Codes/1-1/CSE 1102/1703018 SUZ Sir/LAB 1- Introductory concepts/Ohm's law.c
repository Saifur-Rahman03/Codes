#include<stdio.h>
int main()
{
    float i,r,v;
    printf("Enter Inflow:");
    scanf("%f",&i);
    printf("Enter Resistance:");
    scanf("%f",&r);
    v=i*r;
    printf("The voltage is:%f",v);
    return 0;
}
