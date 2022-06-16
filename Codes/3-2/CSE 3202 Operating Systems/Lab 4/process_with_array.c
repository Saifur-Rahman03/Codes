#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>

int main(){
	int n;
	printf("Enter the array size: ");
	scanf("%d", &n);
	int a[n];
	printf("Enter array: ");
	for(int i = 0; i < n; i++) {
		scanf("%d", &a[i]);
	}
	int sumEven = 0;
	int sumOdd = 0;
	for(int i = 0; i < n; i++) {
		if(a[i] % 2 == 0) {
			sumEven += a[i];
		}
		else {
			sumOdd += a[i];
		}
	}
	int x = fork();
	if(x < 0) {
		printf("Error Occurred\n");
	}
	if(x > 0) {
		printf("\nThis is from parent.. pid = %d.. sum of odd = %d\n", getpid(), sumOdd);
	}
	if(x == 0){
		printf("\nThis is from child.. pid = %d.. sum of even = %d\n", getppid(), sumEven);
	}
	return 0;
}
