#include<stdio.h>
int main()
{
   int i,num1,num2,n,temp;
   printf("Enter range\n");
   scanf("%d",&n);
   num1=0;num2=1;
   printf("%d %d ",num1,num2);
   for(i=0;i<n;i++){
      temp=num2;
      num2+=num1;
      num1=temp;;
      printf("%d ",num2);

   }
}
