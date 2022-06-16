#include<stdio.h>
int main()
{
    int a;
    char gr,sg;
    printf("Enter obtained number:");
    scanf("%d",&a);

    if (a<100 && a>0)
    {
        switch (a/5){
        case 20:
        case 19:
        case 18:
        case 17:
        case 16:gr='A';sg='+';break;
        case 15:gr='A';sg=' ';break;
        case 14:gr='A';sg='-';break;
        case 13:gr='B';sg='+';break;
        case 12:gr='B';sg=' ';break;
        case 11:gr='B';sg='-';break;
        case 10:gr='C';sg='+';break;
        case 9:gr='C';sg='-';break;
        case 8:gr='D';sg=' ';break;


        default:gr='F';sg=' ';break;}
        printf("Grade:%c%c",gr,sg);

    }
        else
            printf("Sorry, Invalid Input. Try again...");
}
