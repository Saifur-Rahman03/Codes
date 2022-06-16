#include<stdio.h>
int main()
{
    int a=10;
    int b=20;
    printf("%d\n",a++);
    printf("%d\n",++a);
    printf("%d\n",++a+b);
    a=10;b=20;
    printf("%d\n",a+b++);
    printf("%d\n",++a+b++);
    printf("%d\n",a--);
    printf("%d\n",--a);
    printf("%d\n",--a+b);
    printf("%d\n",--a+b--);
    printf("%d\n",--a-b--);
}
