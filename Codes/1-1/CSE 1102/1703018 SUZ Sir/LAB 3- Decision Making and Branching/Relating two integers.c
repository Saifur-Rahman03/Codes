#include<stdio.h>
int main()

{
    int n1,n2;
    printf("Enter two integers to check \n");
    scanf("%d%d",&n1,&n2);

    if(n1==n2)
        printf("Result: %d = %d",n1,n2);
    if(n1>n2)
        printf("Result: %d > %d",n1,n2);
    if(n1<n2)
        printf("Result: %d < %d",n1,n2);

    return 0;
}
