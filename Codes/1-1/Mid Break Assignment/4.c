#include<stdio.h>
int main()

{
    int a,b;
    printf("Enter the integer A: ");
    scanf("%d",&a);
    printf("\nEnter the integer B: ");
    scanf("%d",&b);

    a=a+b;
    b=a-b;
    a=a-b;
    printf("\nA = %d\nB = %d\n",a,b);

    return 0;
}
