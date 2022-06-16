#include<stdio.h>
int main()

{
    int n,sum=0,i,j,u,temp;
    printf("Enter the value of n: ");
    scanf("%d",&n);
    for(j=0;j<=n;j++){
    printf("\nEnter the value you want to choose: ");
    scanf("%d",&u);
        if(n>=u){
    for(i=0;i<=n;i++){


        if(i==u){
                for(i=0;i<=u;i++)

                sum+=i;
                printf("\nSum = %d\n",sum);
                sum=0;
                }
        else
            continue;
            }}


        else
            printf("\nError! Wrong Number..\n");

            }
    return 0;
}
