#include<stdio.h>

int main()

{
    char name[30];
    double sal,sold;

    gets(name);
    scanf("%lf %lf",&sal,&sold);
    sal+=(sold*15)/100;

    printf("TOTAL = R$ %.2lf\n",sal);
    return 0;

}
