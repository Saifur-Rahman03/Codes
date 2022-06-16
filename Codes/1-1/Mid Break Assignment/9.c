#include<stdio.h>
int main()

{
    int n,i,m=0;
    printf("Enter the value of n: ");
    scanf("%d",&n);

    for(i=1;i<=10;i++){
        m=n*i;
        printf("%d x %d = %d\n",n,i,m);
    }
    return 0;
}
