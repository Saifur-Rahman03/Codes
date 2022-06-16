#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct customer
{
   int *acct_no;
   char *acct_type;
   char *name;
   double *balance;
}customer,*pc = &customer;
int main()
{
   int n = 3333;
   char t = 'c';
   double b = 99.99;

   customer.acct_no = &n;
   customer.acct_type = &t;
   customer.name = "Smith";
   customer.balance = &b;

   printf("\n%d\t%c\t%s\t%.2f\n",*customer.acct_no,*customer.acct_type,customer.name,*customer.balance);
   printf("\n%d\t%c\t%s\t%.2f\n",*pc->acct_no,*pc->acct_type,pc->name,*pc->balance);

   printf("\n");
   system("PAUSE");

   return 0;
}
