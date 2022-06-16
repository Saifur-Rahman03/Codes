#include<stdio.h>
int fact(int n);
int main()
{
   int a;
   scanf("%d",&a);
   printf("Factorial = %d",fact(a));
   return 0;
}
int fact(int n){
   if(n!=1)

   return n*fact(n-1);
}
