#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct record
{
   char name[30];
   int acct_no;
   char acct_type;
   double balance;
}customer[10];

int main()
{
   int a;
   struct record;


   for(a=0;a<3;a++)
   {
      scanf("%s %d %c %lf",customer[a].name,&customer[a].acct_no,&customer[a].acct_type,&customer[a].balance);
   }
   printf("\nAccount Record");
   printf("\n-----------------------");
   for(a=0;a<3;a++)
   {
      printf("\n%s\t%d\t%c\t%.2lf\n",customer[a].name,customer[a].acct_no,customer[a].acct_type,customer[a].balance);
   }
   printf("\n");
   system("PAUSE");
   return 0;
}
