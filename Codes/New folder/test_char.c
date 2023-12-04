#include <stdio.h>

void main(void)
{
    unsigned char a = 0, b = 0, c = 0, d = 0, e = 0;
    a = 7 ^ 3;
    b = ~1;
    c = ~(c);
    d = 1 >> 2;
    printf("%d %d %d %d %d", a, b, c, d, e);

}
