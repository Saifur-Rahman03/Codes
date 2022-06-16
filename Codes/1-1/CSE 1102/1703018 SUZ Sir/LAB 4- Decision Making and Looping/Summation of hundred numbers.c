#include<stdio.h>
int main ()
{
    int s,i;
    s=0;i=1;
    while (i<100){
        s+=i;
        i++;
    }
    printf("sum=%d",s);
}
