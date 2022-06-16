#include<stdio.h>
int main ()
{
    int y;
    printf("Enter Year:");
    scanf("%d",&y);
    if (y%4==0)
        if (y%400==0)
        printf("The year is not a leap year");
        else
        printf("The year is a leap year");


    else
        printf("The year is not a leap year");
    return 0;
}
