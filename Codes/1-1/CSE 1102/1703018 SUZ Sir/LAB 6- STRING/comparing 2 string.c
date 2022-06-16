#include<stdio.h>
#include<string.h>
int main()
{
    char str1[100],str2[100];

    printf("Enter 1st String\n");
    gets(str1);
    printf("Enter 2nd String\n");
    gets(str2);

    if(strcmp(str1,str2)==0)
        printf("Entered strings are equal\n");
    else
        printf("Entered strings are not equal\n");
    return 0;

}
