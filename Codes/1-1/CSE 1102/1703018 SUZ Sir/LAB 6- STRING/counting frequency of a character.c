#include<stdio.h>
#include<string.h>
int main()
{
    char str[100],ch;
    int i,count=0;
    printf("Enter a text\n");
    gets(str);
    printf("Enter a character to count: ");
    scanf("%c",&ch);
    for(i=0;str[i]!='\0';i++)
    {
        if(str[i]==ch)
            count++;
    }
    printf("No. of character are: %d\n",count);
    return 0;
}
