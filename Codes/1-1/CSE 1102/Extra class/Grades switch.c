#include<stdio.h>
int main()
{
    char grade;
    printf("Enter your grade\n");
    scanf("%c",&grade);

    switch(grade) {

    case 'A' : printf("Excellent\n");break;
    case 'B' :
    case 'C' : printf("Well Done\n");break;
    case 'D' : printf("You Passed\n");break;
    case 'F' : printf("You are *****\nTry Again\n");break;

    default : printf("Invalid Grade\n");break;
    }
    return 0;
}
