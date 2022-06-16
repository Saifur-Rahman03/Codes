#include<stdio.h>
int main()
{
   int M,N;
   int i,s=0,temp;

    for(i=0;i<10000000;i++){
      scanf("%d %d",&M,&N);
      if(M<=0 || N<=0)
         break;
      if(M>N){
         temp=M;
         M=N;
         N=temp;
      }

   for(i=M;i<=N;i++)
      printf("%d ",i);
   for(i=M;i<=N;i++)
      s+=i;
      printf("Sum=%d\n",s);
      s=0;
   }
   return 0;
}
