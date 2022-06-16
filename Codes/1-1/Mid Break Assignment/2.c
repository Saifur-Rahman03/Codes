#include<stdio.h>
int main()

{
    int y;
    printf("Enter Year: ");
    scanf("%d",&y);

    if(y%4==0){
        if(y%400==0)
            printf("\nThe year is not a leap year\n");
        else
            printf("\nThe year is a leap year\n");
        }
    else
        printf("\nThe year is a leap year\n");

    return 0;

}
