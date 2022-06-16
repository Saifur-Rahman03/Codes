#include <stdio.h>

int main( )
{
       int acc, r;
       char name[30];
       double bal;

       FILE *fin;

       if((fin = fopen("file.txt", "r")) == NULL)
              printf("File can't be opened\n\n");
       else{
              printf("Enter request\n"
                     "1. 0 balance\n"
                     "2. credit balance\n"
                     "3. debit balance\n"
                     "4. END\n")
              scanf("%d", &r);

              while(r != 4){
                     fscanf(fin, "%d %s %lf\n", &acc, name, &bal);

                     switch(r){
                     case 1 :
                     }
              }
