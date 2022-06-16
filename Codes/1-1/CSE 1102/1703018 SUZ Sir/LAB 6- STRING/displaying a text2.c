#include<stdio.h>
#include<string.h>

int main()
{
    char ch[100];
    printf("Please Enter a text\n\n");
    scanf("%[^\n]s",ch);
    printf("\n%s\n",ch);
}
