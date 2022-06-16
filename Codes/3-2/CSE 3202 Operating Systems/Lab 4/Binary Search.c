#include <stdio.h>
#include <unistd.h>

int main()
{
	int n;
	printf("Enter array size: ");
	scanf("%d", &n);
	int a[n];
	for(int i = 0; i < n; i++) {
		scanf("%d", &a[i]);
	}
	printf("Enter search item: ");
	int x;
	scanf("%d", &x);
	int l = 0;
	int h = n-1;

	while(l <= h) {
		int m = (l + h)/2;
		if(a[m] == x) {
			printf("found at index = %d\n", m);
			break;
		}
		else if(a[m] < x) {
			l = m + 1;
		}
		else {
			h = m - 1;
		}
	}

}
