#include<stdio.h>
int main()

{
    int c1,c2,u1,u2;
    double p1,p2,v2p;
    scanf("%d %d %lf",&c1,&u1,&p1);
    scanf("%d %d %lf",&c2,&u2,&p2);
    v2p=(p1*u1)+(p2*u2);
    printf("VALOR A PAGAR: R$ %.2lf\n",v2p);
    return 0;


}
