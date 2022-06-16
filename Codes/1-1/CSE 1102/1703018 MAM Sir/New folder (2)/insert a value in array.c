#include<stdio.h>
int main()
{
   int a[100],n,p,m,i;
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
      for(i=n-1;i>=p;i--)
         a[i+1]=a[i];
      printf("Enter the number to insert\n");
         scanf("%d",&a[p]);
      n++;
      printf("\n After inserting\n");
      for(i=0;i<n;i++)
         printf("%d ",a[i]);

      return 0;

}
