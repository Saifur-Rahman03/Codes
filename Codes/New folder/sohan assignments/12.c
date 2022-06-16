#include <stdio.h>

main()
{
	int days;

	printf("Enter no of days: ");
	scanf("%d", &days);

	int month = days / 30;
	days %= 30; //mod //remainder

	printf("\n%d months and %d days\n", month, days);

	return 0;
}
