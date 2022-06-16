#include<stdio.h>
int main()
{
   int N,i;
   double n1[10000],n2[10000],n3[10000];
   double avg[10000];

   scanf("%d",&N);
   for(i=0;i<N;i++)
      scanf("%lf %lf %lf",&n1[i],&n2[i],&n3[i]);

   for(i=0;i<N;i++){
      avg[i]=((n1[i]*2)+(n2[i]*3)+(n3[i]*5))/10;
      printf("%.1lf\n",avg[i]);
   }
}
