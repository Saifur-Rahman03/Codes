#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef struct
{
   char *name;
   int acct_no;
   char acct_type;
   double balance;
}record;

int main()
{
   static record customer[3]={{"Smith",333,'C',33.33},{"jones",666,'C',66.66},{"Brown",999,'C',99.99}};
   int a;
   record *pt;
   printf("\nAccount Record");
   printf("\n-----------------------");
   for(a=0;a<3;a++)
   {
      pt=&customer[a];

      printf("\n%s\t%d\t%c\t%.2lf\n",pt->name,pt->acct_no,pt->acct_type,pt->balance);
   }
   printf("\n");
   system("PAUSE");
   return 0;

}
