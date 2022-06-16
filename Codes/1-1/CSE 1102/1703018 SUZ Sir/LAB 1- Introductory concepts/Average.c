#include<stdio.h>
int main()
{
    float a,b,c,d,avg;
    printf("Enter 4 numbers:");
    scanf("%f%f%f%f",&a,&b,&c,&d);
    avg=(a+b+c+d)/4;
    printf("The average of all numbers is:%f",avg);
    return 0;

}
