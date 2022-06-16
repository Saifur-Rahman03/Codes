#include<stdio.h>
int main()
{
    int i;
    printf("Don't Input any invalid element\nPress any key to continue");
    getch();
    printf("\n\n");
    printf("Enter a value: ");
    scanf("%d",&i);
    printf("\nCharacter corresponding the value is '%c\n'",i);
    return 0;
}
