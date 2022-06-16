#include<stdio.h>
int main()

{
    double A,B,C,tri,cir,sqr,tra,rec,pi=3.14159;
    scanf("%lf %lf %lf",&A,&B,&C);
    tri=(1.0/2)*A*C;
    cir=pi*C*C;
    tra=(A+B)*C/2;
    sqr=B*B;
    rec=A*B;
    printf("TRIANGULO: %.3lf\nCIRCULO: %.3lf\nTRAPEZIO: %.3lf\nQUADRADO: %.3lf\nRETANGULO: %.3lf\n",tri,cir,tra,sqr,rec);
    return 0;
}
