#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

int main()
{
	int k = 10;
	printf("%d\n", k);
	fork();
	fork();
	fork();
	printf("%d\n", k*k);
}
