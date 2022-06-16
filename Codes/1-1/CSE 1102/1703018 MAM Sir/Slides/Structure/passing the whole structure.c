#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct record
{
   char *name;
   int acct_no;
   char acct_type;
   float balance;
}customer = {"Smith",333,'C',33.33};

void adjust(struct record *pt);

int main()
{
   struct record;

   printf("\nRecord before adjustment using pass");
   printf("\n%s\t%d\t%c\t%.2f\n",customer.name,customer.acct_no,customer.acct_type,customer.balance);

    adjust(&customer);

   printf("\nRecord after adjustment using pass");
   printf("\n%s\t%d\t%c\t%.2f\n",customer.name,customer.acct_no,customer.acct_type,customer.balance);

   printf("\n");
   system("PAUSE");
   return 0;
}
void adjust(struct record *pt)
{
   pt->name = "Jones";
   pt->acct_no = 9999;
   pt->acct_type = 'R';
   pt->balance = 99.99;
   return;
}
