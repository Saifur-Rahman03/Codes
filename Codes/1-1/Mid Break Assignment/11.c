#include<stdio.h>
int main()

{
    int i,n,j,count=0;
    printf("Enter the value of n: ");
    scanf("%d",&n);
    printf("Enter that number from which u want to count: ");
    scanf("%d",&j);
    for(i=0;i<=n;i++)
    {
        if(i>j){
            count+=1;
        }
    }
    printf("\nThere are %d numbers greater than %d\n",count,j);
    return 0;
}
