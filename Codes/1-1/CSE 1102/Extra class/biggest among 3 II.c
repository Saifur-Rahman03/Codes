#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter three integers\n");
    scanf("%d %d %d",&a,&b,&c);
    printf("\n");
    if((a>b) && (a>c))
        printf("Biggest = %d\n",a);
    else if((a<b) && (b>c))
        printf("Biggest = %d\n",b);
    else if((a<b) && (b<c))
        printf("Biggest = %d\n",c);

    return 0;

}
