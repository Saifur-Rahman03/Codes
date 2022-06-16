#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main ( )
{
       FILE *fin, *fout;
       int i, n, flag = 1;
       char line[100];

       fin = fopen("12.3.1.txt", "r");
       fout = fopen("12.3.1o.txt", "w");

       fscanf(fin, "%[^\n]", line);

       n = strlen(line);

       for(i = 0; i < n; i++)
       {
              if(flag == 1)
                     line[i] = toupper(line[i]);

              flag = 0;

              if(line[i] == ' ')
                     flag = 1;
       }

       fprintf(fout, "%s\n", line);

       return 0;
}
