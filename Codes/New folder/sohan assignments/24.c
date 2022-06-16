#include <stdio.h>

int isAlpha(char c);
int isDigit(char c);

main()
{
	char c;

	printf("Enter a character: ");
	c = getchar();

	if(isAlpha(c)) {
		printf("%c is a alphabet\n", c);
	}
	else if(isDigit(c)){
		printf("%c is a digit\n", c);
	}
	else {
		printf("%c is a special character\n", c);
	}

	return 0;
}

int isAlpha(char c)
{
	if((c >= 65 && c <= 90) || (c >= 97 && c <= 122) ) {
		return 1;
	}
	else {
		return 0;
	}
}

int isDigit(char c)
{
	if(c >= 48 && c <= 57) {
		return 1;
	}
	else {
		return 0;
	}
}
