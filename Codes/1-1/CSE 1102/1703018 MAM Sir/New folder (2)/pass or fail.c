#include<stdio.h>
int main()
{
   int m;
   printf("Marks = ");
   scanf("%d",&m);
   printf("\n");
   if(m>=0 && m<=100)
      printf("%s\n",(m>=33)?"PASS" : "FAIL");
   else
      printf("Invalid Marks\n");

   return 0;
}
