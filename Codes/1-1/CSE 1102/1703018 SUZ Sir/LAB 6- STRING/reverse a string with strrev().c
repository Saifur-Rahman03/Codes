#include<stdio.h>
#include<string.h>
int main()
{
    char str[100];
    printf("Enter a string\n");
    gets(str);

    strrev(str);

    printf("Reverse of entered string is \n%s",str);
    return 0;
}
