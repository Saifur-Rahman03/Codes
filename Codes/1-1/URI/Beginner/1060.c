#include<stdio.h>
int main()
{
   double a[10];
   int i,pos=0;
   for(i=0;i<6;i++)
      scanf("%lf",&a[i]);
   for(i=0;i<6;i++){
      if(a[i]>0)
         pos++;
   }
   printf("%d valores positivos\n",pos);

   return 0;
}
