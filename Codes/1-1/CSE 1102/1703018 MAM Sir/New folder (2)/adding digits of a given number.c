#include<stdio.h>
int main()
{
   int n,sum=0,remainder;
   printf("Enter an integer\n");
   scanf("%d",&n);
   while(n!=0){
      remainder = n%10;
      sum+=remainder;
      n=n/10;
   }
   printf("Sum of those digits is %d\n",sum);

   return 0;
}
