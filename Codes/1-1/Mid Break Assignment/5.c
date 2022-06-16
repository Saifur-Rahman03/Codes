#include<stdio.h>
int main()

{
    int n,rem,temp,reverse=0;
    printf("Enter an integer: ");
    scanf("%d",&n);
    temp=n;
    while(temp!=0)
    {

        rem=temp%10;
        reverse=reverse*10+rem;
        temp/=10;
    }

    printf("\nReverse number is: %d\n",reverse);
    return 0;
}
