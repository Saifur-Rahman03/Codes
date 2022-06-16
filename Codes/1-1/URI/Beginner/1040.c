#include<stdio.h>
int main()
{
   double n1,n2,n3,n4;
   double avg;
   double exm,avg2;
   scanf("%lf%lf%lf%lf",&n1,&n2,&n3,&n4);
   avg=(n1*2+n2*3+n3*4+n4)/10;
   printf("Media: %.1lf\n",avg);
   if(avg>=7.0)
      printf("Aluno aprovado.\n");
   else if(avg<5.0)
      printf("Aluno reprovado.\n");
   else if(avg>=5.0 && avg<7.0){
      printf("Aluno em exame.\n");
      scanf("%lf",&exm);
      printf("Nota do exame: %.1lf\n",exm);
      avg2=(exm+avg)/2;
      if(avg2>=5.0)
         printf("Aluno aprovado.\n");
      else
         printf("Aluno reprovado.\n");
      printf("Media final: %.1lf\n",avg2);

   }

      return 0;
}
