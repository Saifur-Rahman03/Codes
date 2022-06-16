#include <stdio.h>

main()
{
	int mul = 1, sum = 0, n = 8;
	for(int i = 0; i < n; i++) {
		for(int j = 0; j <= i; j++) {
			mul *= (n - j);
			//printf("mul = %d\n", mul);
			//printf("i = %d\n", i);
			//printf("j = %d\n", j);
		}
		sum += mul;
		mul = 1;
		//printf("sum = %d\n", sum);
	}
	sum++;
	printf("%d ", sum);
}
