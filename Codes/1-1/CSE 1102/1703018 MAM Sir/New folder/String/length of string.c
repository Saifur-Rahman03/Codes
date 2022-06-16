#include<stdio.h>
int main()

{
    char s[1000];
    int i;


    printf("Enter a string: ");
    scanf("%[^\n]s",s);

    for(i=0;s[i]!= '\0'; ++i);
    printf("Length of the string: %d",i);

    return 0;
}
