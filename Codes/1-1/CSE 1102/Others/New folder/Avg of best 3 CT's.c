#include<stdio.h>
int main()
{
    int a,b,c,d,t;
    float avg;
    printf("Enter 4 numbers:");
    scanf("%d%d%d%d",&a,&b,&c,&d);
    t=a;
    t=(t>b)?b:t;
    t=(t>c)?c:t;
    avg=(a+b+c+d-t)/3;
    printf("The result is:%f",avg);
}
