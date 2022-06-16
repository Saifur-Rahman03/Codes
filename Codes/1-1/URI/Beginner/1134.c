#include<stdio.h>
int main()
{
     int a,g,d;
     int i;
     a=g=d=0;

     while(1)
     {
          scanf("%d",&i);
          if(i>0 && i<=4)
          {
               if(i==1)
                    a++;
               else if(i==2)
                    g++;
               else if(i==3)
                    d++;
               else if(i==4)
                    break;
          }
          else
               continue;
     }

     printf("MUITO OBRIGADO\n");
     printf("Alcool: %d\n",a);
     printf("Gasolina: %d\n",g);
     printf("Diesel: %d\n",d);

     return 0;
}
