#include <stdio.h>
main()
{
	int x, y;
	y = 10;
	int u = --y;
	int v = --y;
	int w = --y;
	x = --y + v + w;
//	x = u + v + w;
	printf("%d", x);
}
