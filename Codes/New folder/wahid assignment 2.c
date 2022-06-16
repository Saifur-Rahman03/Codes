#include <stdio.h>

// function definition
int stringMatching(char a[], char sub[], int i);

int main()
{
	// variable declaration
	char a[100], sub[100];
	int flag = 0;
	char x;

	// take string input
	for(int i = 0; ; i++) {
		scanf("%c", &x);
		a[i] = x;
		if(x == '\n')
			break;
	}

	// take substring input
	for(int i = 0; ; i++) {
		scanf("%c", &x);
		sub[i] = x;
		if(x == '\n')
			break;
	}

	// operation for matching strings
	for(int i = 0; a[i] != '\n' ; i++) {
		if(sub[0] == a[i]) {					// check where the first letter matches
			if(stringMatching(a, sub, i)) {		// then check the rest of the substring
				flag = 1;
				break;
			}
			continue;
		}
	}

	// print output
	if(flag == 1) {
		printf("\nfound\n");
	}
	else {
		printf("\nnot found\n");
	}


}

int stringMatching(char a[], char sub[], int i)
{
	for(int j = 0; sub[j] != '\n' ; j++, i++) {
		if(sub[j] != a[i]) {
			return 0;
		}
	}
	return 1;
}
