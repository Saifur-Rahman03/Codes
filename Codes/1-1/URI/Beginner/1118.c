#include<stdio.h>
int main()
{
     double a,b[2],avg;
     int X,i=0;
     while(1){
          while(1){
          scanf("%lf",&a);
          if(a>=0 && a<=10)
               {
                    b[i]=a;
                    i++;
               }
          else
               printf("nota invalida\n");
          if(i>1)
               break;}
          avg=(b[0]+b[1])/2;
          printf("media = %.2lf\n",avg);
          i=0;

          while(1){
               scanf("%d",&X);
               printf("novo calculo (1-sim 2-nao)\n");
               if(X==1 || X==2)
                    break;
          }
          if(X==1)
               continue;
          else
               break;
               }

     return 0;
}






