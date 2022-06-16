#include <stdio.h>

typedef struct
{
       char *name;
       int accno;
       char acctype;
       double balance;
} record;



main( )
{
       void adjust(record *pt);
       static record customer = {"Smith", 1, 'x', 1000};

       printf("%s %d %c %lf\n", customer.name, customer.accno, customer.acctype, customer.balance);

       adjust(&customer);

       printf("%s %d %c %lf\n", customer.name, customer.accno, customer.acctype, customer.balance);
}
void adjust(record *pt)
{
       pt -> name = "John";
       pt -> accno = 3;
       pt -> acctype = 'y';
       pt -> balance = 2000;

       return;
}
