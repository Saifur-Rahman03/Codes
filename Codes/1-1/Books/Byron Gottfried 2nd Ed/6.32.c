#include <stdio.h>
#include <ctype.h>
#define EOL '\n'
#define TRUE 1
#define FALSE 0

main( )
{
       int count, countback, tag, flag, loop = TRUE;
       char line[100];

       while(loop){
              flag = TRUE;

              printf("Please enter a line or text below\n");
              for(count = 0; (line[count] = getchar( )) != EOL; count++)
              ;
              if((toupper(line[0]) == 'E') && (toupper(line[1]) == 'N') && (toupper(line[2]) == 'D'))
                     break;
              tag = count - 1;

              for(count = 0, countback = tag; count <= (tag / 2); count++, countback--){
                     if(line[count] != line[countback])
                            flag = FALSE;
                            break;
              }
       for(count = 0; count <= tag; count++)
              putchar(line[count]);

       if(flag) printf(" is a palindrome\n\n");
       else printf(" is not a palindrome\n\n");

       }
}
