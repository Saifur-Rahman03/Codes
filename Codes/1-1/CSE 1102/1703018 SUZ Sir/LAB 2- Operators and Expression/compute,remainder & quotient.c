#include<stdio.h>
int main()
{
    float a,b,q,r;
    printf("Enter divisor");
    scanf("%f",&a);
    printf("Enter dividend");
    scanf("%f",&b);
    q=a/b;
    r=a%b;
    printf("quotient=%f & remainder=%f",a,b);

}
