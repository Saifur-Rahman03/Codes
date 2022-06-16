#include<stdio.h>
int main()
{
     int i=0,d=0,g=0,m=0,gi,gg,c;
     while(1)
     {
          scanf("%d %d",&gi,&gg);
          m++;
          if(gi==gg)
               d++;
          else if(gi>gg)
               i++;
          else if(gi<gg)
               g++;
          printf("Novo grenal (1-sim 2-nao)\n");
          scanf("%d",&c);
          if(c==1)
               continue;
          else
               break;
     }
     printf("%d grenais\n",m);
     printf("Inter:%d\n",i);
     printf("Gremio:%d\n",g);
     printf("Empates:%d\n",d);
     if(i>g)
          printf("Inter venceu mais\n");
     else if(i<g)
          printf("Gremio venceu mais\n");
     else if(i==g)
          printf("Não houve vencedor\n");

     return 0;
}
