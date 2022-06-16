#include <stdio.h>

int main()
{
	int i, j, n;
	int count = 0;

	scanf("%d", &n); 						//user input array size (multiple of 4)
	int a[n]; 								//input array declaration
	for(i = 0; i < n; i++) {
		scanf("%d", &a[i]);					//array input
	}

	int m = n / 4;							//initializing output array size
	int arrOutput[m + n]; 						//output array declaration
	int sum = 0;

	//output array processing
	for(i = 0, j = 0; i < m + n; i++){			//j = index of input array, i = index of output array
		if(count != 0 && count % 4 == 0){		//checks if 4 elements already added to output array
			arrOutput[i] = sum;				//assigns the sum to output array after 4 input elements
			sum = 0;						//sets sum to zero
			count = 0;						//sets count to zero
		}
		else {
			arrOutput[i] = a[j];				//input array elements assignment to output array
			sum += a[j];						//sum for 4 input elements
			count++;						//counts the elements added to check 4 elements added or not
			j++;							//increment input index after assignment
		}

	}
	for(i = 0; i < n; i++){						//printing input array
		printf("%d ", a[i]);
	}
	printf("\n");
	for(i = 0; i < m + n; i++){					//printing output array
		printf("%d ", arrOutput[i]);
	}
	printf("\n");

	return 0;
}
