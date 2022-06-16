#include <stdio.h>
#include <ctype.h>
#define EOL '\n'

main( )
{
       int tag, count;
       char letter[100];

       while((letter[0] = getchar( ))!= '*')
       {
              for(count = 1; (letter[count] = getchar( )) != EOL; count++)
                     ;
              tag = count;
              count = 0;
              while(count < tag)
                     putchar(toupper(letter[count++]));
              printf("\n\n");
       }
       printf("Good Bye\n");
}
