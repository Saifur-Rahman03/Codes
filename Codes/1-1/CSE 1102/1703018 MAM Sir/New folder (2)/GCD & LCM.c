#include<stdio.h>
int main()
{
   int a,b,x,y,t,gcd,lcd;
   printf("Enter two integers\n");
   scanf("%d %d",&x,&y);
   a=x;
   b=y;
   while(b!=0){
      t=b;
      b=a%b;
      a=t;
   }
   gcd=a;
   lcd=(x*y)/gcd;
   printf("GCD = %d\n",gcd);
   printf("LCD = %d\n",lcd);
   return 0;
   }

