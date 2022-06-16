#include<stdio.h>
int main()
{
     int i=1,N;
     scanf("%d",&N);
     while(N!=0)
     {
          printf("%d %d %d\n%d %d %d\n",i,i*i,i*i*i,i,(i*i)+1,(i*i*i)+1);
          i++;
          N--;
     }
     return 0;
}
