#include<stdio.h>
#include<stdlib.h>
#include<string.h>
float adjust(float balance);
struct record
{
   char name[30];
   int acct_no;
   char acct_type;
   float balance;
}customer = {"Smith",333,'C',33.33};

int main()
{
   struct record;

   printf("\nRecord before adjustment using individual pass");
   printf("\n%s\t%d\t%c\t%.2f\n",customer.name,customer.acct_no,customer.acct_type,customer.balance);

   customer.balance = adjust(customer.balance);

   printf("\nRecord after adjustment using individual pass");
   printf("\n%s\t%d\t%c\t%.2f\n",customer.name,customer.acct_no,customer.acct_type,customer.balance);

   printf("\n");
   system("PAUSE");
   return 0;
}
float adjust(float balance)
{
   float newbalance = 30.02;
   return (newbalance);
}
