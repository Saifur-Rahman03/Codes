#include<stdio.h>
int main()

{
    char o;
    double n1,n2;
    printf("Enter operands and operator \n");
    scanf("%lf %c %lf",&n1,&o,&n2);

    switch (o)
    {
    case'+':
        printf("=%.2lf\n",n1+n2);
        break;
    case'-':
        printf("=%.2lf\n",n1-n2);
        break;
    case'*':
        printf("=%.2lf\n",n1*n2);
        break;
    case'/':
        printf("=%.2lf\n",n1/n2);
        break;
    default:
        printf("Error! operator is not correct..");
        break;
    }
return 0;
}
