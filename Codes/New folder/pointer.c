#include <stdio.h>
#include <stdlib.h>

int main()
{
	int x;
	int *ptr;

	x = 10;

	ptr = &x;

	*ptr = *ptr + 1;

	printf("x = %d\n", x);
	printf("&x = %d\n", &x);
	printf("ptr = %d\n", ptr);
	printf("*ptr = %d\n", *ptr);
	printf("&*ptr = %d\n", &*ptr);
	system("PAUSE");

	return 0;
}


