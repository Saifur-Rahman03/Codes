#include<stdio.h>
int main()
{
    float c,f;
    printf("Enter the temperature in Celsius scale:");
    scanf("%f",&c);
    f=(9*c/5)+32;
    printf("The temperature in Fahrenheit scale is:%f",f);
    return 0;
}
