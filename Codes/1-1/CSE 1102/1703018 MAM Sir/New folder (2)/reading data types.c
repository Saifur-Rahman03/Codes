#include<stdio.h>
int main()

{
    int i;
    float f;
    double d;
    char c;

    printf("Enter an integer number: ");
    scanf("%d",&i);
    printf("Enter a float number: ");
    scanf("%f",&f);
    printf("Enter a double number: ");
    scanf("%lf",&d);
    printf("Enter a character: ");
    scanf(" %c",&c);
    printf("\n");

    printf("Integer value is = %d\n",i);
    printf("Float value is = %f\n",f);
    printf("Double value is = %lf\n",d);
    printf("Character is = %c\n",c);

    if(c >=97)
        printf("Upper case Character is = %c\n",c-32);
    else
        printf("Lower case Character is = %c\n",c+32);

    printf("Character value is = %d\n",c);

    return 0;
}
