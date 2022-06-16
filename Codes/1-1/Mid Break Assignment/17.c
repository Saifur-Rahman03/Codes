#include<stdio.h>
int main()

{
    int n,i,sqr;
    printf("Enter the value of n: ");
    scanf("%d",&n);

    for(i=1;i<=n;i++){
        sqr=i*i;
        printf("%d\t%d\n",i,sqr);
    }
    return 0;
}
