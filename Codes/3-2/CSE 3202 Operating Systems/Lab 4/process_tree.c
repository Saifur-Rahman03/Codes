#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>

int main() {
	float a, b;
	printf("Enter two numbers: ");
	scanf("%f %f", &a, &b);
	int n1 = fork();
	int n2 = fork();

	if(n1 > 0 && n2 > 0) {
		printf("pid = %d, a + b = %f\n", getpid(), a+b);
	}
	else if(n2 > 0 && n1 == 0) {
		printf("pid = %d, a - b = %f\n", getpid(), a-b);
	}
	else if(n1 == 0 && n2 == 0) {
		printf("pid = %d, a * b = %f\n", getpid(), a*b);
	}
	else if(n1 >= 0 && n2 == 0) {
		printf("pid = %d, a / b = %f\n", getpid(), a/b);
	}
}
