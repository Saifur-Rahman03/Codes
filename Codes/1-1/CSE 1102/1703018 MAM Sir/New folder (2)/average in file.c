#include<stdio.h>
int main()
{
   int n,i,sum=0,a[100],count=0;
   float avg;
   FILE *fin,*fout;
   fin=fopen("in.txt","r");
   fout=fopen("avg.txt","w");

      for(i=0;fscanf(fin,"%d",&n)!=EOF;i++)
         sum+=n;
         avg=(1.0*sum)/n;
         fprintf(fout,"Sum = %.d\n",sum);
         fprintf(fout,"average = %.2f\n",avg);
         return 0;
}
