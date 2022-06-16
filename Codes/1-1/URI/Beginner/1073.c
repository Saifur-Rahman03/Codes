#include<stdio.h>
int main()
{
   int N,i,s;
   scanf("%d",&N);
   for(i=2;i<=N;i+=2){
      s=i*i;
      printf("%d^2 = %d\n",i,s);
   }
   return 0;
}
