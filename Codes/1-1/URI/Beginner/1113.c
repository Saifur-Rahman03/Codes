#include<stdio.h>
int main()
{
   int X,Y;
   int i;
   for(i=0;i<100000;i++){
      scanf("%d %d",&X,&Y);
      if(X==Y)
         break;
      if(X>Y)
         printf("Crescente\n");
      else
         printf("Decrescente\n");
   }
   return 0;
}
