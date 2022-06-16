#include<stdio.h>
int main ()
{
    char feb;
    int days;
    printf("Enter 1 if the year is leap year otherwise enter 0:");
    scanf("%c",&feb);
    days=(feb=='1')?29:28;
    printf("The number of days in February is %d days",days);
    return 0;
}
