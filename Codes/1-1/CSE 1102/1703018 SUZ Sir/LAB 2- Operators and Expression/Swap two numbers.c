#include<stdio.h>
int main ()
{
    float a,b;
    printf("Enter a=");
    scanf("%f",&a);
    printf("Enter b=");
    scanf("%f",&b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("a=%f & b=%f ",a,b);
}
