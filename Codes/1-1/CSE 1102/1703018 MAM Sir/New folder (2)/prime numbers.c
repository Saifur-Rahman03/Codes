#include<stdio.h>
int main()
{
   int n,i,j;
   printf("Enter range\n");
   scanf("%d",&n);
   for(i=3;i<n;i++){
      for(j=2;j<i;j++){
         if(i%j == 0)
            break;
         else if(i==j+1)
            printf("%d ",i);
      }
   }
}
