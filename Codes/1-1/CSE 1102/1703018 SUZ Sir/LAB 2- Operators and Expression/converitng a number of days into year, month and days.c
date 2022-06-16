#include<stdio.h>
int main ()
{
    int d,m,y;
    printf("Enter the number of days:");
    scanf("%d",&d);
    y=d/365;
    m=(d%365)/30;
    d=(d%365)%30;
    printf("The result is %d years, %d months & %d days",y,m,d);
    return 0;
}
