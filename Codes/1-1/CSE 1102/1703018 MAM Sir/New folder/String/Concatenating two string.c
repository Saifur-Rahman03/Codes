#include<stdio.h>
int main()

{
    char s1[100],s2[100],i,j;
    printf("Enter first string: ");
    scanf("%[^\n]s",s1);
    printf("Enter second string: ");
    scanf("%s[^\n]s",s2);

    for(i=0; s1[i]!= '\0'; i++)
        for(j=0; s2[j] != '\0'; j++, i++)
            {
                s1[i]=s2[j];
            }
    return 0;
}
