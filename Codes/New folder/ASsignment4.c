#include <stdio.h>

int asciiValue(char c);

int main()
{
	char name[] = "MD Muib Hossain Antor";
	int i;
	int n = sizeof(name) - 1;

	for(i = 0; i < n; i++) {
		printf("%c", name[i]);
	}
	printf("\n");
	for(i = n - 1; i >= 0; i--) {
		printf("%c", name[i]);
	}
	printf("\n");
	for(i = 1; i < n - 1; i++) {
		printf("%c", name[i]);
	}
	printf("\n");
	for(i = 0; i < n; i++) {
		printf("%d ", asciiValue(name[i]));
	}
	printf("\n");
}

int asciiValue(char c)
{
	int i = c;
	return i;
}
