#include<stdio.h>
int main ()

{
    int n;
    printf("Enter a positive integer: ");
    scanf("%d",&n);

    if(n>0)
    {
        if(n%2==0)
            printf("\nThe number is an even number\n");
        else
            printf("\nThe number is an odd number\n");
    }
    else
        printf("\nSorry, You need to input a positive integer... Try again later...\n");

    return 0;
}
