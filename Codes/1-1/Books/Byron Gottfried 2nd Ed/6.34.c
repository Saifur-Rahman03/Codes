#include <stdio.h>
#include <ctype.h>
#define EOL '\n'

main( )
{
       int count, tag, linecount = 1;
       char line[100];

       printf("Enter a line or text below\n");
       while((line[0] = getchar( )) != '*'){
              for(count = 1; (line[count] = getchar( )) != EOL; count++)
                     ;
              tag = count;

              for(count = 0; count < tag; count++)
                     putchar(toupper(line[count]));
              printf("\n\n");
              linecount++;

              for(count = 0; count < tag; count++)
              if(line[count] == '$' && line[count + 1] == '$'){
                     printf("Break Condition detected... TERMINATE EXECUTION\n\n");
                     goto end;
              }
       }
       end : printf("Good Bye\n");
}
