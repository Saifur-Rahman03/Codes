#include <stdio.h>
#include <ctype.h>

main( )
{
       FILE *fin;
       char c;

       fin = fopen("12.3.txt", "w");

       do{
              putc(toupper(c = getchar( )), fin);
       }while(c != '\n');

       fclose(fin);
}
