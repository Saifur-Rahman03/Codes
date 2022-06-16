#include <stdio.h>

char lower_to_upper(char c1);

main( )
{
       char lower, upper;
       scanf("%c", &lower);
       upper = lower_to_upper(lower);
       printf("%c\n", upper);
}

char lower_to_upper(char c1)
{
       char c2;
       c2 = (c1 >= 'a' && c2 <= 'z') ? ('A' + c1 - 'a') : c1;
       return (c2);
}
