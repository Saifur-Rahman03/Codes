#include<stdio.h>

int c=0;
int Big(int a, int b);

int main()
{
    int x,y;
    int big;
    scanf("%d%d",&x,&y);
    big=Big(x,y);
    printf("%d",big);
    return 0;
}
int Big(int a, int b){
c=(a>b)?a:b;
return c;
}
