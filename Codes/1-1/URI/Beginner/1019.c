#include<stdio.h>
int main()

{
    int N,s,m,h;
    scanf("%d",&N);
    h=(N/3600);
    m=(N%3600)/60;
    s=((N%3600)%60);
    printf("%d:%d:%d\n",h,m,s);
    return 0;
}
