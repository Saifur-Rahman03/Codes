#include<stdio.h>
int main()
{
   int N,X,Y,o,i,j,s[100000],temp;
   s[0]=0;
   scanf("%d",&N);
   for(i=0;i<N;i++){
      scanf("%d %d",&X,&Y);
      if(X>Y){
         temp=Y;
         Y=X;
         X=temp;
      }
      if(X%2==0)
         o=X+1;
      else
         o=X+2;
      for(j=o;j<Y;j+=2)
         s[i]+=j;

   }
   for(i=0;i<N;i++)
      printf("%d\n",s[i]);
}
