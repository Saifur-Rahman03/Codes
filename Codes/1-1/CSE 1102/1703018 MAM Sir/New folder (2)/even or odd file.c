#include<stdio.h>
int main()
{
   int n;
   FILE *fin,*fe,*fo;
   fin=fopen("in.txt","r");
   fe=fopen("even.txt","w");
   fo=fopen("odd.txt","w");
   while(fscanf(fin,"%d",&n)!= EOF)
      if(n%2==0)
         fprintf(fe,"%d ",n);
      else
         fprintf(fo,"%d ",n);

   return 0;
}
