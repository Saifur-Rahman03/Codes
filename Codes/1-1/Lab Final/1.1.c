#include<stdio.h>
int main()
{
   double a[100],temp;
   int i,j,n,x;
   FILE *fin,*fas,*fds;
   fin = fopen("array.txt","r");
   fas = fopen("sorted array ascending.txt","w");
   fds = fopen("sorted array descending.txt","w");

   printf("How many elements you want to sort\n");
   scanf("%d",&n);
   for(i=0;i<n;i++)
      fscanf(fin,"%lf",&a[i]);


   printf("\n");

   fprintf(fas,"Sorted num Ascending\n");
   for(i=0;i<n-1;i++){
      for(j=i+1;j<n;j++){
         if(a[i]>a[j]){
            temp=a[i];
            a[i]=a[j];
            a[j]=temp;
         }
      }
   }
   for(i=0;i<n;i++)
      fprintf(fas,"%.2lf\t",a[i]);

   printf("\n\n");

   fprintf(fds,"Sorted num Descending\n");
   for(i=0;i<n-1;i++){
      for(j=i+1;j<n;j++){
         if(a[i]<a[j]){
            temp=a[i];
            a[i]=a[j];
            a[j]=temp;
         }
      }
   }
   for(i=0;i<n;i++)
      fprintf(fds,"%.2lf\t",a[i]);
   printf("\n");
   return 0;
}
