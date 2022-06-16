#include <stdio.h>
#include <stdlib.h>

int main()
{
    char arr[10];
    int contr[26];
    int i,j;
    for(i=0;i<26;i++)
        contr[i]=0;
    printf("Enter 10 characters:\n");
    for(i=0;i<10;i++)
    {
        scanf("%c",&arr[i]);
        fflush(stdin);
    }
    for(i=0;i<10;i++)
    {
        contr[arr[i]-'a']=contr[arr[i]-'a']+1;
    }
    for(i=0;i<26;i++)
        if(contr[i])
        {
            printf("%c=%d\n",i+'a',contr[i]);
        }
    return 0;
}
