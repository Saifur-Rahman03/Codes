#include<stdio.h>
#include<string.h>
int main()

{
    int i,j,c;
    char arr[100];
    printf("Enter Input\n");
    gets(arr);
    printf("\nOutput\n");

    for(i=0;i<strlen(arr);i=i+2){
        for(j=0;j<arr[i+1]-48;j++){
            printf("%c",arr[i]);
        }
    }
    return 0;

}
