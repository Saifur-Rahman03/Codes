#include<stdio.h>
int main()
{
   int a[100],n,p,m,j,i,temp;
   printf("How many numbers?\n");
   scanf("%d",&n);
   for(i=0;i<n;i++)
      scanf("%d",&a[i]);
   printf("Enter a position to insert\n");
   scanf("%d",&m);
   p=m-1;
   if(p<0 || p>100)
      printf("Impossible\n");
   else
      for(i=p;i<n;i++){
         for(j=i+1;j<i;j++){
         temp=a[i];
         a[i]=a[j];
         }}

      printf("\nAfter deleting\n");
      for(i=0;i<n;i++)
         printf("%d ",a[i]);

      return 0;
}
