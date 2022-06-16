#include <stdio.h>
main() {
    int a, b;
    printf("enter the values: ");
    scanf("%d%d", &a, &b);

    float average = (a + b) / 2.0;

    printf("%f", average);
}
