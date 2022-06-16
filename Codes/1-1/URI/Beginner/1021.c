#include<stdio.h>
int main()
{
    double N;
    int n,c,tk100,tk50,tk20,tk10,tk5,tk2,tk1;
    int c50,c25,c10,c05,c01;
    scanf("%lf",&N);
    n=(N/1);
    tk100=(n/100);
    tk50=(n%100)/50;
    tk20=((n%100)%50)/20;
    tk10=(((n%100)%50)%20)/10;
    tk5=((((n%100)%50)%20)%10)/5;
    tk2=(((((n%100)%50)%20)%10)%5)/2;
    tk1=((((((n%100)%50)%20)%10)%5)%2)/1;
    c=100*(N-n);
    c50=(c/50);
    c25=((c%50)/25);
    c10=(((c%50)%25)/10);
    c05=((((c%50)%25)%10)/5);
    c01=(((((c%50)%25)%10)%5)/1);

    printf("NOTAS:\n");
    printf("%d nota(s) de R$ 100.00\n",tk100);
    printf("%d nota(s) de R$ 50.00\n",tk50);
    printf("%d nota(s) de R$ 20.00\n",tk20);
    printf("%d nota(s) de R$ 10.00\n",tk10);
    printf("%d nota(s) de R$ 5.00\n",tk5);
    printf("%d nota(s) de R$ 2.00\n",tk2);

    printf("MOEDAS:\n");
    printf("%d moeda(s) de R$ 1.00\n",tk1);
    printf("%d moeda(s) de R$ 0.50\n",c50);
    printf("%d moeda(s) de R$ 0.25\n",c25);
    printf("%d moeda(s) de R$ 0.10\n",c10);
    printf("%d moeda(s) de R$ 0.05\n",c05);
    printf("%d moeda(s) de R$ 0.01\n",c01);
    return 0;
}
