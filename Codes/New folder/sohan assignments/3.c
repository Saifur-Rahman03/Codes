#include <stdio.h>
#include <math.h>

main()
{
	int angle;
	double value;

	printf("Angle  Value\n");
	for(int i = 0; i <= 180; i += 10) {
		double rad = (3.142 / 180);
		value = cos(i * rad);
		if(i == 90){
			value = 0;
		}
		printf("%d\t%.2lf\n", i, value);
	}
}
