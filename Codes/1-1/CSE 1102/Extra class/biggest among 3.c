#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter three integers\n");
    scanf("%d %d %d",&a,&b,&c);
    printf("\n");
    if(a>b){
        if(a>c)
            printf("Biggest = %d\n",a);
        else
            printf("Biggest = %d\n",c);
    }
    else
    if(a<b){
        if(b>c)
            printf("Biggest = %d\n",b);
        else
            printf("Biggest = %d\n",c);
    }
    return 0;
}
