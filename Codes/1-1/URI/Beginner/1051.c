#include<stdio.h>
int main()
{
   double sal,tax;
   scanf("%lf",&sal);

   if(sal>=0.00 && sal<=2000.00)
      printf("Isento\n");
   else if(sal>=2000.01 && sal<=3000.00){
      tax=((sal-2000)*8)/100;
      printf("R$ %.2lf\n",tax);}
   else if(sal>=3000.01 && sal<=4500.00){
      tax=(((sal-3000.00)*18)/100)+(((sal-2000.00-(sal-3000.00))*8)/100);
      printf("R$ %.2lf\n",tax);}
   else if(sal>4500.00){
      tax=(((sal-4500)*28)/100)+(((sal-3000.00-(sal-4500.00))*18)/100)+(((sal-2000.00-(sal-3000.00))*8)/100);
      printf("R$ %.2lf\n",tax);}


   return 0;
}
