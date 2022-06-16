#include<stdio.h>
#include<stdlib.h>

int main()

{
    int n,temp=0;
    printf("Enter the value of n: ");
    scanf("%d",&n);

    int i,p=1;
    for(i=1;i<=n;i++)
        {

        p*=i;

        printf("The factorial of %d is",i);

        printf("= %d\n",p);
        }
return 0;
}



