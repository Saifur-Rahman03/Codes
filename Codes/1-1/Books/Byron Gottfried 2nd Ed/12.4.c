#include <stdio.h>
#include <ctype.h>

main( )
{
       FILE *fin;
       char c;

       fin = fopen("12.4.txt", "r");

       do{
              putchar(c = getc(fin));
       }while(c != '\n');

       fclose(fin);
}
