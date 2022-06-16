#include<stdio.h>
#include<string.h>
int main ()
{
    char str[100];
    int count[100];
    int i,j;
    for(i=0;i<100;i++)
        count[i]=0;
    printf("Enter string:\n");
    gets(str);
    for(i=0;i<str[100];i++)
    {
        scanf("%c",&str[i]);
        fflush(stdin);
    }
    for(i=1;i<;i++)
    {
        count[str[i]-'a']=count[str[i]-'a']+1;
    }
    for(i=0;i<100;i++)
        if(count[i])
        {
            printf("%c=%d\n",i+'a',count[i]);
        }
    return 0;
}
