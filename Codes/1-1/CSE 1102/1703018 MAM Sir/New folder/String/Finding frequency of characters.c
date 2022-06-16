#include<stdio.h>
int main()

{
    char str[100],ch;
    int i,freq=0;

    printf("Enter a string: ");
    gets(str);

    printf("\nEnter a character to find frequency: ");
    scanf("%c",&ch);

    for(i=0; str[i]!='\0';i++){
        if(ch==str[i])
            ++freq;
    }
    printf("\nFrequency of %c: %d\n",ch,freq);

    return 0;

}
