#include<stdio.h>
int main()
{
     double n,s[10000],sum=0,avg;
     int i,j;
     int x=0;
     for(i=0;i<100;i++){
          scanf("%lf",&n);
     for(j=0;j<100;j++){
          if(n>=0.0 && n<=10.0){
               x++;
               s[i]=n;}
          else
               printf("nota invalida\n");
               break;}
          if(x==2)
               break;
     }
     for(j=0;j<100;j++)
          sum+=s[j];
     avg=(1.0*sum)/2;
     printf("media = %.2lf\n",avg);

     return 0;
}
