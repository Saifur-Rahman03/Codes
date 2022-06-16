#include <stdio.h>
#define EOL '\n'

void reverse (void);

main( )
{
       printf("Enter a line or text below\n");
       reverse( );
}

void reverse (void)
{
       char c;
       if((c = getchar( )) != EOL)
              reverse( );
       putchar(c);
       return;
}
