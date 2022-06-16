#include<stdio.h>
int main()
{
   int X,Y;
   double p;
   scanf("%d %d",&X,&Y);

   if(X==1)
      p=(1.0*Y*4.00);
   else if(X==2)
      p=(1.0*Y*4.50);
   else if(X==3)
      p=(1.0*Y*5.00);
   else if(X==4)
      p=(1.0*Y*2.00);
   else if(X==5)
      p=(1.0*Y*1.50);

   printf("Total: R$ %.2lf\n",p);

   return 0;
}


