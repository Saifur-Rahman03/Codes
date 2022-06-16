#include<stdio.h>
int main()
{
   int N,X,i,in=0,out=0;
   scanf("%d",&N);
   while(N!=0){
      scanf("%d",&X);

      if(X>=10 && X<=20)
         in++;
      else
         out++;
      N--;
   }
   printf("%d in\n%d out\n",in,out);
   return 0;
}
