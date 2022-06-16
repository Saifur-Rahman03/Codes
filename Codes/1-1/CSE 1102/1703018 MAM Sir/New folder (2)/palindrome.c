#include<stdio.h>
int main()
{
   int a,n,temp=0,rem;
   printf("Enter a integer\n");
   scanf("%d",&a);
   n=a;
   while(n!=0){
      rem = n%10;
      temp= temp*10 + rem;
      n=n/10;
   }
   if(temp==a)
      printf("%d is a palindrome\n",a);
   else
      printf("%d is not a palindrome\n",a);

   return 0;
}
