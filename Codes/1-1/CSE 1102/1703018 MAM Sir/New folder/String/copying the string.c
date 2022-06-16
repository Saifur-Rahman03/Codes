#include<stdio.h>
int main()
{
    char s1[1000],s2[1000];
    int i;

    printf("Enter string s1: ");
    scanf("%[^\n]s", s1);

    for(i=0;s1[i]!= '\0'; ++i){
        s2[i]=s1[i];
    }
    s2[i]= '\0';
    printf("\nString s2: %s\n",s2);
    return 0;
}
