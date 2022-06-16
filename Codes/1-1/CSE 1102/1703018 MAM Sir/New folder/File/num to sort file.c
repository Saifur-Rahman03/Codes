#include<stdio.h>
int main()
{
   int a[100],i,j,temp,count=0;
   FILE *fin,*fasc,*fdes;

   fin = fopen("sort.txt","r");
   fasc = fopen("ascending.txt","w");
   fdes = fopen("descending.txt","w");

   while(fscanf(fin,"%d",&a[count])!= EOF){
         count++;
         }
printf("Count %d",count);
      for(i=0;i<count;i++){
         for(j=i+1;j<count;j++){
            if(a[i]>a[j]){
               temp = a[i];
               a[i] = a[j];
               a[j] = temp;
            }
               }
      }
   for(i=0;i<count;i++)
      fprintf(fasc,"%d\t",a[i]);
}

