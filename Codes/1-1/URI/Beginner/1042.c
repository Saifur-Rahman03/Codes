#include<stdio.h>
int main()
{
   int a[10],i,j,temp,b[10];
   for(i=0;i<3;i++)
      scanf("%d",&a[i]);
   for(i=0;i<3;i++)
      b[i]=a[i];

   for(i=0;i<3;i++){
      for(j=i+1;j<3;j++){
         if(a[i]>a[j]){
            temp=a[i];
            a[i]=a[j];
            a[j]=temp;
         }
      }
   }
   for(i=0;i<3;i++)
      printf("%d\n",a[i]);
   printf("\n");

   for(i=0;i<3;i++)
      printf("%d\n",b[i]);

   return 0;

}
