#include<stdio.h>
#include<string.h>

int main()
{
    char ch[1000],c;
    int i=0;
    printf("Please Enter a text. Press enter to stop.\n");
    while(c!='\n'){
        c=getchar();
        ch[i]=c;
        i++;
    }
    ch[i]='\0';
    printf("\n%s\n",ch);
    return 0;
}
