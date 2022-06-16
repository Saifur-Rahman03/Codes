#include<stdio.h>
int main()
{
   int N,Amount,i;
   char type;
   int sum=0,sumC=0,sumR=0,sumS=0;
   double c,s,r;
   scanf("%d",&N);
   for(i=0;i<N;i++){
      scanf("%d %c",&Amount,&type);

         if(type=='C')
            sumC+=Amount;

         else if(type=='R')
            sumR+=Amount;

         else if(type=='S')
            sumS+=Amount;}

      sum=sumC+sumR+sumS;

      c=(sumC*100.00)/sum;
      r=(sumR*100.00)/sum;
      s=(sumS*100.00)/sum;

      printf("Total: %d cobaias\n",sum);
      printf("Total de coelhos: %d\n",sumC);
      printf("Total de ratos: %d\n",sumR);
      printf("Total de sapos: %d\n",sumS);
      printf("Percentual de coelhos: %.2lf %\n",c);
      printf("Percentual de ratos: %.2lf %\n",r);
      printf("Percentual de sapos: %.2lf %\n",s);

      return 0;
}
