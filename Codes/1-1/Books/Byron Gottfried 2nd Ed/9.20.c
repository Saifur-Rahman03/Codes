#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void reorder(int n, char x[ ][12]);

main( )
{
       int i, n = 0;
       char x[10][12];

       printf("Enter each string on a separate line below\n\n");
       printf("Type \'END\' when finished\n\n");

       do
       {
              printf("string %d : ", n + 1);
              scanf("%s", x[n]);
       }while(strcmp(x[n++], "END"));

       n--;

       reorder(n, x);

       printf("\n\nRecorded list of string\n");
       for(i = 0; i < n; i++)
              printf("string %d : %s\n", i + 1, x[i]);
}

void reorder(int n, char x[ ][12])
{
       int temp[12];
       for(int i = 0; i < n - 1; i++){
              for(int j = i + 1; j < n; j++){
                     if(strcmp(x[i], x[j]) > 0){
                            strcpy(temp, x[i]);
                            strcpy(x[i], x[j]);
                            strcpy(x[j], temp);
                     }
              }
       }
       return;
}
