#include<stdio.h>
int main()
{
     int i,p;
     int pass;
     p=2002;
     for(i=0;i<100000;i++){
          scanf("%d",&pass);
          if(pass==p){
               printf("Acesso Permitido\n");
               break;}
          else
               printf("Senha Invalida\n");
     }
     return 0;
}

