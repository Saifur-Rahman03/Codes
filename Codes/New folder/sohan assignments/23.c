#include <stdio.h>

main()
{
	char c;

	printf("Print Y/y for Yes and N/n for No: ");

	c = getchar();

	if(c == 'y' || c == 'Y') {
		printf("\nMy name is BUSY BEE\n");
	}
	else
	{
		printf("\nYou are good for nothing\n");
	}

	return 0;
}
