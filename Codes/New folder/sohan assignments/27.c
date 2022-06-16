#include <stdio.h>

main()
{
	int x, y;
	printf("Enter x, y: ");
	scanf("%d %d", &x, &y);

	float res1 = (x + y) / (x - y);
	float res2 = (x + y) / 2;
	float res3 = (x + y) * (x - y);

	printf("a = %.2f\nb = %.2f\nc = %.2f\n", res1, res2, res3);

	return 0;
}
