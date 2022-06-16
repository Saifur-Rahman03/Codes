#include <stdio.h>

main()
{
	int i, n;
	float sum = 0;
	printf("Limit of series: ");
	scanf("%d", &n);

	for(int i = 1; i <= n; i++) {
		if(i == n) {
			printf("(1/%d^2) ", i);
		}
		else {
			printf("(1/%d^2) + ", i);
		}
		sum += (1 / (1.0 * i * i));
	}
	printf("\nSum = %f\n", sum);
}
