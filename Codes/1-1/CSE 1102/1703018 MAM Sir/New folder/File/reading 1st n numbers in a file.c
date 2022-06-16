#include<stdio.h>
int main()

{
   int i,n,a[100];
   FILE *fp,*fo;
   fp = fopen("in.txt","r");
   fo = fopen("out.txt","w");

   printf("How many numbers?\n");
   scanf("%d",&n);


   for(i=0;i<n;i++)
      fscanf(fp,"%d",&a[i]);
   for(i=0;i<n;i++)
      fprintf(fo," %d",a[i]);
   printf("output file is\n");
   for(i=0;i<n;i++)
      printf("%d\t",a[i]);

   return 0;
}
