#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>

int main() {
	double a, b;
	printf("Enter two numbers: ");
	scanf("%lf %lf", &a, &b);

	int n1 = fork();
	int n2 = fork();
	int n3 = fork();

	if(n1 > 0 && n2 > 0 && n3 > 0) {
		printf("pid = %d, a + b = %.2lf\n", getpid(), a+b);
	}
	if(n1 == 0 && n2 > 0 && n3 > 0) {
		printf("pid = %d, a - b = %.2lf\n", getpid(), a-b);
	}
	if(n1 > 0 && n2 == 0 && n3 > 0) {
		printf("pid = %d, b - a = %.2lf\n", getpid(), b-a);
	}
	if(n1 == 0 && n2 == 0 && n3 > 0) {
		printf("pid = %d, a * b = %.2lf\n", getpid(), a*b);
	}
	if(n1 > 0 && n2 > 0 && n3 == 0) {
		printf("pid = %d, a / b = %.2lf\n", getpid(), a/b);
	}
	if(n1 == 0 && n2 == 0 && n3 == 0) {
		printf("pid = %d, b / a = %.2lf\n", getpid(), b/a);
	}
	if(n1 == 0 && n2 > 0 && n3 == 0) {
		printf("pid = %d, a = %.2lf\n", getpid(), a);
	}
	if(n1 > 0 && n2 == 0 && n3 == 0) {
		printf("pid = %d, b = %.2lf\n", getpid(), b);
	}
	return 0;
}
