#include<stdio.h>
int main()
{
    int a,b,s=0;
    scanf("%d %d",&a,&b);
    s=a+b;
    if(s%2!=0)
    {
        if(s>9000)
            printf("Summation is greater than 9000\n");
        else
            printf("Summation is not greater than 9000\n");
    }
    else
        printf("Summation is even... Try again..\n");
    return 0;
}
