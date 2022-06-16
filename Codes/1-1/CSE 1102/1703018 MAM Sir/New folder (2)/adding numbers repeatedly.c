#include<stdio.h>
int main()
{
   int a,b,c;
   char ch;
   while(1){
      printf("Enter two numbers a & b\n");
      scanf("%d %d",&a,&b);
      c=a+b;
      printf("Sum = %d\n",c);
      printf("\n");
      printf("Do you wish to add more?(y/n)\n");
      scanf(" %c",&ch);
      printf("\n");
      if(ch == 'y' || ch == 'Y')
         continue;
      else
         break;
   }

}
