#include<stdio.h>
int max(int *m,int *n);

int main()
{
    int a,b,max;
    printf("Enter two integers a & b: ");
    scanf("%d %d",&a,&b);
    max=find_max(&a,&b);
    printf("After increment\n");
    printf("The  maximum is = %d \n",max);
    printf("The value of a & b is: %d, %d\n",a,b);

    return 0;
}
int find_max(int *m,int *n)
{
    *m=*m+1;
    *n=*n+1;
    if(*m>*n)
        return *m;
    else
        return *n;
}
