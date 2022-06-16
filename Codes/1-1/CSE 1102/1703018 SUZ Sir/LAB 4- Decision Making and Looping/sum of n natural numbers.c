#include<stdio.h>
int main ()
{
    int i,s,n;
    i=1;s=0;
    printf("Enter the value of n:");
    scanf("%d",&n);
    for(i=1;i<=n;++i)
    {
        s+=i;
    }
    printf("Sum= %d",s);
}
