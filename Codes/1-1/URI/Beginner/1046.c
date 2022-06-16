#include<stdio.h>
int main()
{
   int start,stop,dur;
   scanf("%d %d",&start,&stop);
   if(start >= stop)
      dur=(24-start)+stop;
   else
      dur= stop - start;
   printf("O JOGO DUROU %d HORA(S)\n",dur);

   return 0;
}
