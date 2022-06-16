#include<stdio.h>
int main()
{
   double A,B,C,a[10];
   int i,j;
   double temp;
   for(i=0;i<3;i++)
      scanf("%lf",&a[i]);
   for(i=0;i<2;i++){
      for(j=i+1;j<3;j++){
         if(a[i]<a[j]){
            temp=a[i];
            a[i]=a[j];
            a[j]=temp;
         }
      }
   }
   A=a[0];
   B=a[1];
   C=a[2];

   if(A>= B+C)
      printf("NAO FORMA TRIANGULO\n");
   else{
   if(A*A == B*B + C*C)
      printf("TRIANGULO RETANGULO\n");
   if((A*A) > (B*B + C*C))
      printf("TRIANGULO OBTUSANGULO\n");
   if((A*A) < (B*B + C*C))
      printf("TRIANGULO ACUTANGULO\n");
   if(A == B && B == C)
      printf("TRIANGULO EQUILATERO\n");
   else if(A == B || B == C || C == A)
      printf("TRIANGULO ISOSCELES\n");
   }

   return 0;
}
