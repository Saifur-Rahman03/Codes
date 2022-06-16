#include <stdio.h>
#include <math.h>

main()
{
	int l, t;
	double r;

	printf("Enter l: ");
	scanf("%d", &l);

	printf("Enter t: ");
	scanf("%d", &t);

	r = exp((-1) * (1.0 * l) * (1.0 * t));

	printf("r = %lf\n", r);
	return 0;
}
