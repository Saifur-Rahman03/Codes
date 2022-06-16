#include<stdio.h>
#include<string.h>
int main()

{
    int i,n;
    char arr[100];
    printf("\nEnter your number\n");
    gets(arr);
    printf("\nYour Input is\n\n");

    for(i=0;i<strlen(arr);i++){

    switch (arr[i]){

    case '0':printf("Zero ",arr[i]);break;
    case '1':printf("One ",arr[i]);break;
    case '2':printf("Two ",arr[i]);break;
    case '3':printf("Three ",arr[i]);break;
    case '4':printf("Four ",arr[i]);break;
    case '5':printf("Five ",arr[i]);break;
    case '6':printf("Six ",arr[i]);break;
    case '7':printf("Seven ",arr[i]);break;
    case '8':printf("Eight ",arr[i]);break;
    case '9':printf("Nine ",arr[i]);break;

    default:printf("Invalid Input\n");break;
        }
        }
        printf("\n");
        return 0;
}
