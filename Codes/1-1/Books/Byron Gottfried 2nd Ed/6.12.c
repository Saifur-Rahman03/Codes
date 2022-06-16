#include <stdio.h>
#include <ctype.h>
#define EOL '\n'

main()
{
       int count = 0, tag;
       char letter[100];

       do count++;
       while((letter[count] = getchar( )) != EOL)
       ;

       tag = count--;

       count = 1;

       do putchar(toupper(letter[count++]));
       while(count < tag)
       ;
}
