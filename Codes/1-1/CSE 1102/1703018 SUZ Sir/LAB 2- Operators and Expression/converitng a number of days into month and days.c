#include<stdio.h>
int main ()
{
    int d,m;
    printf("Enter the number of days:");
    scanf("%d",&d);
    m=d/30;
    d=d%30;
    printf("The result is %d months & %d days",m,d);
    return 0;
}
