#include<stdio.h>
int main()

{
    int n,i,sum=0;
    printf("Enter the limit of numbers: ");
    scanf("%d",&n);
    printf("\n");
    for(i=0;i<n;i++){
        if(i%2==0)
            sum+=i;
    }
    printf("Sum of even number till %d = %d\n",n,sum);
    return 0;
}
