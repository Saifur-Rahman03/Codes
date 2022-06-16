#include <stdio.h>

// global variables
char input[100];
int space[100];

// function declarations
void printArray(char *a);
int checkDup(int i);

int main()
{
	// takes input
	int count = 1;
	int i, k = 1;
	space[0] = -1;
	for(i = 0; ; i++) {
		scanf("%c", &input[i]);
		if(input[i] == '\n') {
			input[i] = ' ';
			input[i + 1] = '\n';
			space[k++] = i;
			break;
		}
		if(input[i] == ' ') {
			space[k++] = i; 		// stores the index of spaces
		}
	}
	for(int i = 1; ; i++) {
		if(space[i] == 0)
			break;
		count++;					// counts the number of spaces
	}
	for(int i = 0; i < count; i++) {
		if(space[i + 2] - (space[i + 1] + 1) == space[i + 1] - (space[i] + 1)) { 	// checks if the length of words between two spaces is same or not
			int rep = checkDup(i);	// if same calls a function
			for(int j = 0; j < count; j++){
				space[j] -= rep;	// reassigns index of space characters after shifting
			}
		}
	}
	// show output
	printArray(input);
}

int checkDup(int i)
{
	int j = space[i] + 1;
	int k = space[i + 1] + 1;
	int n = k - j - 1;
	int flag = 1;
	while(n--) {
		if(input[k] - input[j] == 32)			// if first letter of the first word among duplicate words is uppercase
			continue;
		if(input[j] - input[k] == 32)			// if first letter of the first word among duplicate words is lowercase
			continue;
		if(input[j++] != input[k++]){ 		// checks if both words are same or not
			flag = 0;
			break;
		}
	}
	n = k - j - 1;
	if(flag == 1) {
		do {
			input[j + n] = input[k + n];		// shifts array to delete the duplicate word
			j++; k++;
		} while(input[k] != '\n');
		input[j] = '\n';
		return (k - j);						// returns no of shifts done to erase the duplicate word
	}
	else {
		return 0;
	}
}

void printArray(char *a)
{
	for(int i = 0; ; i++) {
		if(a[i] == '\n') {
			break;
		}
		printf("%c", a[i]);
	}
	printf("\n");
}
