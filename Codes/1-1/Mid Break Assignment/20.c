#include<stdio.h>
int main()

{
    int y;
    printf("Wanna know about next leap years??\nPress any key\n");
    getch();
    printf("\nNext 20 Leap Year\n\n");
    for(y=2018;y<=2100;y++)
        {
            if(y%4==0){
                if(y%100!=0)
                    printf("%d\t",y);
            }
        }
    return 0;
}
