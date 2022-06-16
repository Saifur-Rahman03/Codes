#include<stdio.h>
int find_max(int x,int y);
int main()
{
    int a,b,max;
    printf("Enter two integers: ");
    scanf("%d %d",&a,&b);
    max= find_max(a,b);
    printf("The maximum number is %d ",max);
    return 0;

}
int find_max(int x,int y)
{
    if(x>y)
        return x;
    else
        return y;
}
