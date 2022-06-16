#include<stdio.h>
int main()

{
    char str1[100],temp[100],str2[100];
    int i,j,freq;
    printf("Enter a set of integer(range 1-100)\n");
    gets(str1);
    for(i=0;str1[i]!='\0';i++){
        temp[i]=str1[i];
    for(j=i+1;str1[j]!='\0';j++){
            if(temp[i]==str1[j])
                freq++;
    printf("%s is %d times\n",temp,freq);
        }
    }
}
