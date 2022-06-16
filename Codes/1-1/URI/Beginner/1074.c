#include<stdio.h>
int main()
{
   int N,X[10000],i;
   scanf("%d",&N);
   for(i=0;i<N;i++){
      scanf("%d",&X[i]);
   }
   for(i=0;i<N;i++){
      if(X[i]>0 && X[i]%2==0)
         printf("EVEN POSITIVE\n");
      else if(X[i]>0 && X[i]%2!=0)
         printf("ODD POSITIVE\n");
      else if(X[i]<0 && X[i]%2!=0)
         printf("ODD NEGATIVE\n");
      else if(X[i]<0 && X[i]%2==0)
         printf("EVEN NEGATIVE\n");
      else if(X[i]==0)
         printf("NULL\n");
   }
   return 0;
}
