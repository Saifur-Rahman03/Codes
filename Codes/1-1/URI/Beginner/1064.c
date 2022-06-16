#include<stdio.h>
int main()
{
   double a[10],b[10];
   int i,p=0;
   double avg,s=0;

   for(i=0;i<6;i++)
      scanf("%lf",&a[i]);
   for(i=0;i<6;i++){
      if(a[i]>0){
         b[i]=a[i];
         p++;}}
   for(i=0;i<6;i++)
      s+=b[i];
   avg=s/p;

   printf("%d valores positivos\n",p);
   printf("%.1lf\n",avg);
}
