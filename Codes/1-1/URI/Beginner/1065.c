#include<stdio.h>
int main()
{
   int a[10],p=0,i;

   for(i=0;i<5;i++)
      scanf("%d",&a[i]);

   for(i=0;i<5;i++)
      if(a[i]%2==0)
         p++;

   printf("%d valores pares\n",p);
   return 0;
}
