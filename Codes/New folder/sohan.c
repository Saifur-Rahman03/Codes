#include <stdio.h>
int main()
{
	int i, ct1, ct2, ct3, ct4;
	float avg;
	for(i = 1; i <=32; i++){
	printf("Roll no: %d\n", i);
	printf("CT1: ");
	scanf("%d", &ct1);
	printf("CT2: ");
	scanf("%d", &ct2);
	printf("CT3: ");
	scanf("%d", &ct3);
	printf("CT4: ");
	scanf("%d", &ct4);
	if(ct1 > 20 || ct2 > 20 || ct3 > 20 || ct4 > 20){
		printf("Error Input\n\n");
		i--;
		continue;
	}
	int low;
	low = ct1;
	if(low > ct2)
		low =  ct2;
	if(low > ct3)
		low =  ct3;
	if(low > ct4)
		low =  ct4;
	avg = (ct1 + ct2 + ct3 + ct4 - low) / 3;
	printf("My CT average: %.2f\n\n", avg);
	}
	return 0;
}
