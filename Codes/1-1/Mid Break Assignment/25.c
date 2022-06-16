#include<stdio.h>
int main ()
{
    int n,reverse=0,rem,temp,sum;
    printf("Enter an integer: ");
    scanf("%d",&n);
    temp=n;
    while(temp!=0){
        rem=temp%10;
        reverse=reverse*10+rem;
        temp/=10;
    }
    printf("The reverse integer is %d\n",reverse);
    sum=n+reverse;
    printf("\nSum = %d\n",sum);

    return 0;

}
