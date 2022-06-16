#include<stdio.h>
int main()

{
    double n,i,sum,avg;
    printf("Enter the value of n: ");
    scanf("%lf",&n);

    for(i=1;i<=n;i++){
        sum+=i*i;
    }
    avg=sum/n;
    printf("\nThe average is = %.2lf\n",avg);
    return 0;
}
