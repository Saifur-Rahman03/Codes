#include<stdio.h>
int main()

{
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    printf("The Input is = %d\nAfter Shifting 2 bits to left\nThe input is = %d\n",n,n>>2);
    return 0;
}
