#include<stdio.h>
int main()
{
     int i,N;
     i=1;

     scanf("%d",&N);

     while(N!=0)
     {
          printf("%d %d %d\n",i,i*i,i*i*i);
          i++;
          N--;
     }
     return 0;
}
