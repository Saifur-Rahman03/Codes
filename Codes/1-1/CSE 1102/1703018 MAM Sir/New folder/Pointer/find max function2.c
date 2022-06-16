#include<stdio.h>
int find_max(int x,int y,int z);
int main()
{
    int a,b,c,max;
    printf("Enter three integers: ");
    scanf("%d %d %d",&a,&b,&c);
    max=find_max(a,b,c);
    printf("The max number is %d",max);
    return 0;
}
int find_max(int x,int y,int z)
{
    int t;
    t=x;
    t = (t<y)?y:t;
    t = (t<z)?z:t;
    return t;
}
