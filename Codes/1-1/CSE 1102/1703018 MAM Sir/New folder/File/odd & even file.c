#include<stdio.h>
int main()
{
   int n,i,a;
   FILE *fin,*fodd,*feven;

   fin = fopen("num.txt","r");
   fodd = fopen("odd.txt","w");
   feven = fopen("even.txt","w");

   while(fscanf(fin,"%d",&a)!= EOF){

      if(a % 2 == 0)
         fprintf(feven,"%d\t",a);
      else
         fprintf(fodd,"%d\t",a);

   }

}
