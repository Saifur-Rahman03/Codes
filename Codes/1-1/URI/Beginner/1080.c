#include<stdio.h>
int main()
{
   int a[100];
   int i,j,temp;
   for(i=0;i<10;i++)
      scanf("%d",&a[i]);

   for(i=1;i<10;i++){
         if(a[0]<a[i]){
            a[0]=a[i];
            j=i;
      }
      }
   printf("%d\n",a[0]);
   printf("%d\n",j+1);
   return 0;
}
