#include<stdio.h>
int main()
{
   int i,n,a[100];
   FILE *fi,*fo;
   fi = fopen("in.txt","r");
   fo = fopen("out.txt","w");
   printf("How many numbers?\n");
   scanf("%d",&n);

   for(i=0;i<n;i++)
      fscanf(fi,"%d",&a[i]);
   for(i=0;i<n;i++)
      fprintf(fo," %d",a[i]);

   return 0;
}
