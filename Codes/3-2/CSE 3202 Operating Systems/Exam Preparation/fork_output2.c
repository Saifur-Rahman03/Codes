#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

int main()
{
	int k = 100;
	printf("%d\n", k++);
	int id1 = fork();
	int id2 = fork();
	int id3 = fork();
	printf("%d\n", k);
}

