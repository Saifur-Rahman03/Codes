#include <stdio.h>

struct record
{
       int acc_no;
       char name[10];
       double bl;
}customer[1000];

int main( )
{
       int n, acc = 0, i = 0, uac;
       char nm[100];
       double cin, cout;

       while(1)
       {
              printf("Choose an option\n\n1. New\n2. Update\n3. Balance\n4. Cash in\n5. Cash out\n6. Exit\n\n");
              scanf("%d", &n);

              if(n == 1)
              {
                     i++;
                     acc++;
                     customer[i].acc_no = acc;

                     printf("Enter name\n");
                     scanf("%s", customer[i].name);
                     printf("Your account no. = %d\n", acc);


                     customer[i].bl = 0.00;
                     printf("Your balance = %.2lf\n", customer[i].bl);
                     printf("\n\n");
              }
              else if(n == 2)
              {
                     printf("Enter account no. ");
                     scanf("%d", &uac);
                     printf("\n");

                     for(i = 0; i < 1000; i ++){
                            if(uac == customer[i].acc_no){
                                   printf("Enter new name\n");
                                   scanf("%s", &customer[i].name);
                            }
                     }
              }
              else if(n == 3)
              {
                     printf("Enter account no. ");
                     scanf("%d", &uac);
                     printf("\n");
                     for(i = 0; i < 1000; i ++)
                            if(uac == customer[i].acc_no)
                                   printf("Name: %s   Balance = %.2lf\n",customer[i].name, customer[i].bl);

                     printf("\n\n");
              }
              else if(n == 4)
              {
                     printf("Enter account no. ");
                     scanf("%d", &uac);
                     printf("\n");

                     for(i = 0; i < 1000; i++){
                            if(uac == customer[i].acc_no){
                                   printf("Enter amount of cash in = ");
                                   scanf("%lf", &cin);
                                   printf("\n");

                                   customer[i].bl += cin;
                     }
              }
              printf("\n\n");
              }
              else if(n == 5)
              {
                     printf("Enter account no. ");
                     scanf("%d", &uac);
                     printf("\n");

                     for(i = 0; i < 1000; i++){
                            if(uac == customer[i].acc_no){
                                   printf("Enter amount of cash out = ");
                                   scanf("%lf", &cout);
                                   printf("\n");

                                   if(cout > customer[i].bl)
                                          printf("You don't have enough money\n");
                                   else
                                          customer[i].bl -= cout;
                     }
              }
              printf("\n\n");
              }
              else if(n == 6)
                     break;
       }

       return 0;
}
