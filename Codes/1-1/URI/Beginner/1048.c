#include<stdio.h>
int main()
{
   double sal,intrst,me;
   scanf("%lf",&sal);


   if((sal>0.00) && (sal<=400.00)){
      intrst=15;
      me=sal*(intrst/100);
      sal+=me;
   }
   else if((sal>=400.01) && (sal<=800.00)){
      intrst=12;
      me=sal*(intrst/100);
      sal+=me;
   }
   else if((sal>=800.01) && (sal<=1200.00)){
      intrst=10;
      me=sal*(intrst/100);
      sal+=me;
   }
   else if((sal>=1200.01) && (sal<=2000.00)){
      intrst=7;
      me=sal*(intrst/100);
      sal+=me;
   }
   else if((sal>2000.00)){
      intrst=4;
      me=sal*(intrst/100);
      sal+=me;
   }
   printf("Novo salario: %.2lf\n",sal);
   printf("Reajuste ganho: %.2lf\n",me);
   printf("Em percentual: %.0lf %\n",intrst);

   return 0;
}
