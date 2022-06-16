#include <stdio.h>

main()
{
	int i, n;
	printf("Limit of series: ");
	scanf("%d", &n);

	for(i = 1; i <= n; i++) {
		int res = i;
		res *= i;
		printf("%d = %d\n", i, res);
	}

	return 0;
}
