#include<stdio.h>
int main()
{
   int n,i,f=1;
   printf("Enter an integer\n");
   scanf("%d",&n);
   for(i=1;i<=n;i++)
      f*=i;
   printf("Factorial = %d\n",f);
   return 0;
}
