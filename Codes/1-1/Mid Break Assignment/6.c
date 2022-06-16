#include<stdio.h>
int main()

{
    int n,i,sum=0;
    printf("Enter the value of n: ");
    scanf("%d",&n);
    for(i=0;i<=n;i++){
        sum+=i;
    }
    printf("\nSum is = %d\n",sum);
    return 0;
}
