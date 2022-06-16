#include<stdio.h>
void main()
{
    unsigned int a =60;
    unsigned int b= 13;
    int c=0;

    c=a&b;
    printf("Line 1 - Value of a&b is %d\n",c);

    c=a|b;
    printf("Line 2 - Value of a|b is %d\n",c);

    c=a^b;
    printf("Line 3 - Value of a^b is %d\n",c);

    c=~(a-1);
    printf("Line 4 - Value of not a is %d\n",c);
    return 0;
}
