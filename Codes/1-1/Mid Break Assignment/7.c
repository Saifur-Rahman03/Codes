#include<stdio.h>
int main()

{
    int n,i,sum=0;
    printf("Enter the value of n: ");
    scanf("%d",&n);
    for(i=0;i<=n;i++){
        if(i%3==0 || i%5==0){
            sum+=i;
        }
    }
    printf("\nSum = %d\n",sum);
    return 0;
}
