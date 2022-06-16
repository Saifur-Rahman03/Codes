#include<stdio.h>
int main()
{
   double A,B,C;
   double a;
   scanf("%lf %lf %lf",&A,&B,&C);

   if(A+B > C && B+C > A && C+A > B)
      printf("Perimetro = %.1lf\n",A+B+C);
   else{
      a=((A+B)*C)/2;
      printf("Area = %.1lf\n",a);
   }
   return 0;
}
