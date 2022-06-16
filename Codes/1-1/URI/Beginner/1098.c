#include<stdio.h>
int main()
{
   double i,j;
   for(i=0;i<=20;i+=2){
      for(j=10+i;j<=30+i;j+=10){
            if(i==0.00 || i==10.0 || i==20.0)
               printf("I=%.0lf J=%.0lf\n",i/10,j/10);
            else
               printf("I=%.1lf J=%.1lf\n",i/10,j/10);}}


   return 0;
}
