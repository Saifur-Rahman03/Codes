#include<stdio.h>
int main()

{
    int m;
    printf("Enter your marks: ");
    scanf("%d",&m);
    printf("\n");
    printf("Your grade is\n");
    if(m>100)
        printf("Invalid Marks\n");
    else if(m>=80)
        printf("First Division\n");
    else if(m>=60)
        printf("Second DIvision\n");
    else if(m>=40)
        printf("Third Division\n");
    else
        printf("FAILED\n");

    return 0;
}
