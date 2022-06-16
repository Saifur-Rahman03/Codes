#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main()
{
    char str[100],w[100];
    int n,i,d,j,c,t=0,temp=0,count[100];
    char ch;
    for(i=0;i<100;i++)
        count[i]=0;
    printf("Sentence: ");
    gets(str);
    printf("Word: ");
    gets(w);
    for(i=0;str[i]!='\0';i++)
    {
        if(str[i] == w[0])
        {
                for(c=i,d=0;d<strlen(w);d++,c++)
                {
                        if(str[c] != w[d])
                        {
                                temp++;
                                break;
                        }
                }
                if(temp == 0)
                {
                        t++;
                        count[i]++;
                }
                else
                {
                        temp = 0;
                }
        }
    }
    if(t==0)
        printf("%s is not present.",w);
    else
    {
        printf("%s is present at position:",w);
        for(i=0;i<100;i++)
        {
                if(count[i]!=0)
                        printf("%d ",i+1);
        }
    }
    return 0;
}
