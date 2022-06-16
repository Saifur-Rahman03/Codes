#include<stdio.h>
int main()

{
    int a,b;
    printf("Enter two integers\n");
    scanf("%d %d",&a,&b);
    printf("\n");

    (a>b)?printf("Biggest = %d\n",a):printf("Biggest = %d\n",b);
    return 0;
}
