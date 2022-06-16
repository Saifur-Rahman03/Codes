#include<stdio.h>
int Addition(int a, int b);

int main()
{
    int x=10,y=20;
    int result;

    result=Addition(x,y);
    printf("%d",result);
    return 0;
}
int Addition (int a,int b){
return a+b;
}
