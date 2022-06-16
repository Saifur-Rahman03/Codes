#include <stdio.h>
#include <string.h>

int main( )
{
       char *s1 = "Happy New Year";
       char *s2 = "Happy Holidays";

       printf("%d\n", strcmp(s1,s2));

       printf("%d\n", strncmp(s1,s2,3));
       printf("%d\n", strncmp(s1,s2,6));
       printf("%d\n", strncmp(s1,s2,7));
       return 0;
}
