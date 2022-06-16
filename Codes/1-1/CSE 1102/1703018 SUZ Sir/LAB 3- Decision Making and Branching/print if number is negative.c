#include<stdio.h>
int main ()


{
    int n;
    printf("Please Enter a number: ");
    scanf("%d",&n);

    if(n<0)
        printf("\nNumber = %d\n",n);
    else
        printf("\nSorry, You have to put a negative number... Try again later...\n");

    return 0;
}
