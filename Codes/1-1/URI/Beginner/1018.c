#include<stdio.h>
int main()

{
    int N;
    int tk100,tk50,tk20,tk10,tk5,tk2,tk1;
    scanf("%d",&N);
    tk100=(N/100);
    tk50=(N%100)/50;
    tk20=((N%100)%50)/20;
    tk10=(((N%100)%50)%20)/10;
    tk5=((((N%100)%50)%20)%10)/5;
    tk2=(((((N%100)%50)%20)%10)%5)/2;
    tk1=((((((N%100)%50)%20)%10)%5)%2)/1;
    printf("%d\n",N);
    printf("%d nota(s) de R$ 100,00\n",tk100);
    printf("%d nota(s) de R$ 50,00\n",tk50);
    printf("%d nota(s) de R$ 20,00\n",tk20);
    printf("%d nota(s) de R$ 10,00\n",tk10);
    printf("%d nota(s) de R$ 5,00\n",tk5);
    printf("%d nota(s) de R$ 2,00\n",tk2);
    printf("%d nota(s) de R$ 1,00\n",tk1);
    return 0;
}
