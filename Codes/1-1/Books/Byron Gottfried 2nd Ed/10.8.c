#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

void scanline(char line[ ], int *pv, int *pc, int *pd, int *pw, int *po);

int main( )
{
       char line[100];
       int v = 0;
       int c = 0;
       int d = 0;
       int w = 0;
       int o = 0;

       printf("Enter a line or text below\n");
       scanf(" %[^\n]", line);

       scanline(line, &v, &c, &d, &w, &o);

       printf("\nNo of vowels: %d\n", v);
       printf("\nNo of consonants: %d\n", c);
       printf("\nNo of white spaces: %d\n", w);
       printf("\nNo of digits: %d\n", d);
       printf("\nNo of others: %d\n", o);
}

void scanline(char line[ ], int *pv, int *pc, int *pd, int *pw, int *po)
{
       char c;
       int i = 0;

       while((c = toupper(line[i++])) != '\0'){
              if(c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U' )
                    ++ *pv;
              else if(c >= '0' && c <= '9')
                     ++ *pd;
              else if(c >= 'A' && c <= 'Z')
                     ++ *pc;
              else if(c == ' ' || c == '\t')
                     ++ *pw;
              else
                     ++ *po;
       }

       return;
}
