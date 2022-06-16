#include<stdio.h>
int main()
{
   int X,Y,a[10],i,s=0,j;
   scanf("%d",&X);
   scanf("%d",&Y);

   if(X>Y){
   if(Y%2!=0){
      j=Y+2;
      for(i=j;i<X;i+=2)
         s+=i;
   }
   else
   {
      j=Y+1;
      for(i=j;i<X;i+=2)
         s+=i;
   }
   }

   else{
if(Y>X){
   j=X+2;
   if(X%2!=0){
      for(i=j;i<Y;i+=2)
         s+=i;
   }
   else
   {
      j=X+1;
      for(i=j;i<Y;i+=2)
         s+=i;
   }
   }
   }
   printf("%d\n",s);
   return 0;
   }

