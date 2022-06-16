#include <stdio.h>

int main()
{
	int i, j, n, t;
	int pos, neg;
	scanf("%d", &n);
	int a[n], r[n];
	for(i = 0; i < n; i++) {
		scanf("%d", &a[i]);
	}
	for(i = 0, j = 0; i < n; i++) {
		if(a[i] < 0){
			r[j] = a[i];
			j++;
		}
	}
	neg = j;
	for(i = 0; i < n; i++) {
		if(a[i] >= 0){
			r[j] = a[i];
			j++;
		}
	}
	pos = j - neg;
	for(i = 0; i < n; i++) {
		printf("%d ", r[i]);
	}
	printf("\n");
	printf("Total negative: %d\n", neg);
	printf("Total positive: %d\n", pos);
}
