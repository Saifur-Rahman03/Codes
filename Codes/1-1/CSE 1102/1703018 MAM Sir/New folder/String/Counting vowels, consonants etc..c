#include<stdio.h>
int main()

{
    char line[1000];
    int v,c,s,d,i;
    v=c=s=d=i=0;
    printf("Enter a text: ");
    gets(line);

    for(i=0;line[i]!= '\0';i++){
        if(line[i]=='a' || line[i]=='e' || line[i]=='i' || line[i]=='o' || line[i]=='u' || line[i]=='A' || line[i]=='E' || line[i]=='I' || line[i]=='O' || line[i]=='U')
        {
            v++;
        }
        else if((line[i]>='a' && line[i]<='z') || (line[i]>='A' && line[i]<='Z'))
        {
            c++;
        }
        else if(line[i]>='0' && line[i]<='9')
        {
            d++;
        }
        else if(line[i]==' ')
        {
            s++;
        }
    }
    printf("\nVowels: %d\n",v);
    printf("Consonants: %d\n",c);
    printf("Digits: %d\n",d);
    printf("Spaces: %d\n",s);
    return 0;
}
