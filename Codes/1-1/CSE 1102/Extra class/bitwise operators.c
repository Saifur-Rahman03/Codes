#include<stdio.h>
int main()
{
    int a=100,b=101;
    printf("A&B = %d\n",a&b);
    printf("A|B = %d\n",a|b);
    printf("A^B = %d\n",a^b);
    printf("not B = %d\n",~b);
    printf("left shift by 2 bit: %d\n",b<<2);
    printf("right shift by 2 bit: %d\n",b>>2);
    return 0;
}
