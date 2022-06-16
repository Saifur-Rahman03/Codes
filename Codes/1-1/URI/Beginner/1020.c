#include<stdio.h>
int main()
{
    int D,d,m,y;
    scanf("%d",&D);
    y=(D/365);
    m=(D%365)/30;
    d=(D%365)%30;
    printf("%d ano(s)\n%d mes(es)\n%d dia(s)\n",y,m,d);
    return 0;
}
