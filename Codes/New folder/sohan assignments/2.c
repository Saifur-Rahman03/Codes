#include <stdio.h>

main()
{
	//variable declaration
	float investment, interest = 0.11, sum;
	int year;

	//input
	printf("give investment amount: ");
       scanf("%f", &investment);

	printf("give no of year: ");
       scanf("%d", &year);
       printf("\n");
	printf("year    amount\n");

       for(int i = 1; i <= year; i++) {
		sum = investment + (investment * interest);
		investment = sum;
		printf(" %d      %.2f\n", i, sum);
       }

       return 0;
}
