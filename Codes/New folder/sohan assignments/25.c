#include <stdio.h>

main()
{
	char c;

	printf("Enter a character: ");
	c = getchar();

	if(c >= 65 && c <= 90) {  //uppercase
              c += 32;
	}
	else {				 //lowercase
		c -= 32;
	}
	printf("Reverse case: %c\n", c);

	return 0;
}
