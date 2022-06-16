#include <stdio.h>
#define INT_MAX 65535

int checkEven(int val);
int main()
{
	int i, val, j = 0, even = 0;
	int a[INT_MAX];
	while(1) {
		scanf("%d", &val);
		if(val == 0)
			break;
		a[j++] = val;
	}
	int evenArr[even];
	int k = 0;
	for(i = 0; i < j; i++) {
		if(checkEven(a[i]) == 1)
			evenArr[k++] = a[i];
	}
	for(i = 0; i < k; i++){
		printf("%d ", evenArr[i]);
	}
	printf("\n");
}
int checkEven(int val)
{
	if(val % 2 == 0)
		return 1;
	else
		return 0;
}
