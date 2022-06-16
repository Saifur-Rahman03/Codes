#include<stdio.h>
int main()

{
    char line[100];
    int i,j;
    printf("Enter a string: ");
    gets(line);

    for(i=0;line[i]!='\0';i++)
    {
        while((line[i]>='a' && line[i]<='z') || (line[i]>='A' && line[i]<='Z'))
        {
            for(j=i;line[j]!='\0';j++)
            line[j]=line[j+1];
        }
    }
    return 0;
}
