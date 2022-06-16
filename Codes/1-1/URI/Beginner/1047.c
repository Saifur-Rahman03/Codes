#include<stdio.h>
int main()
{
   int sth,stm,sph,spm,durh,durm;
   scanf("%d %d %d %d",&sth,&stm,&sph,&spm);

   if((sph== sth+1) && (stm>spm)){
      durh=0;
      durm=(60-stm)+spm;
   }
   else if((sth==sph) && (stm==spm)){
      durh=24;
      durm=0;
   }
   else if((sth==sph) && (stm>spm)){
      durh=23;
      durm=(60-stm)+spm;
   }
   else if((sth==sph) && (stm<spm)){
      durh=0;
      durm=spm-stm;
   }
   else if((sth>sph) && (stm==spm)){
      durh=(24-sth)+sph;
      durm=0;
   }
   else if((sth<sph) && (stm==spm)){
      durh=sph-sth;
      durm=0;
   }
   else if((sth>sph) && (stm>spm)){
      durh=(23-sth)+sph;
      durm=(60-stm)+spm;
   }

   else if((sth>sph) && (stm<spm)){
      durh=(24-sth)+sph;
      durm=(spm-stm);
   }
   else if((sth<sph) && (stm>spm)){
      durh=(sph-sth);
      durm=(60-stm)+spm;
   }
   else if((sth<sph) && (stm<spm)){
      durh=sph-sth;
      durm=spm-stm;
   }



   printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n",durh,durm);

   return 0;
}
