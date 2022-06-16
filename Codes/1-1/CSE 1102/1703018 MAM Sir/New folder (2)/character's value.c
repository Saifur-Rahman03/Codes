#include<stdio.h>
int main()

{
    char c;
    printf("Don't Input any invalid element\nPress any key to continue");
    getch();
    printf("\n\n");
    printf("Enter a character: ");
    scanf("%c",&c);
    printf("\nThe value of that character is = %d\n",c);

    return 0;
}
