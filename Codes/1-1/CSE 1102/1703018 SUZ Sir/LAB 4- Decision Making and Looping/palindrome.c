#include<stdio.h>
int main()
{
    int n,r=0,rem,temp;
    printf("Enter an integer:");
    scanf("%d",&n);
    temp=n;
    while(temp!=0)
    {
        rem=temp%10;
        r=r*10+rem;
        temp/=10;}
       {if(r==n)
            printf("%d is a palindrome",n);
        else
            printf("%d is not a palindrome",n);

    }
}
