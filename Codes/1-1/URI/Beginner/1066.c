#include<stdio.h>
int main()
{
   int a[10],i,p=0,n=0,e=0,o=0;

   for(i=0;i<5;i++)
      scanf("%d",&a[i]);
   for(i=0;i<5;i++)
      if(a[i]>0)
         p++;
   for(i=0;i<5;i++)
      if(a[i]<0)
         n++;
   for(i=0;i<5;i++)
      if(a[i]%2==0)
         e++;
   for(i=0;i<5;i++)
      if(a[i]%2!=0)
         o++;
   printf("%d valor(es) par(es)\n%d valor(es) impar(es)\n%d valor(es) positivo(s)\n%d valor(es) negativo(s)\n",e,o,p,n);

   return 0;
}
