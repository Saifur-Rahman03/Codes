#include <stdio.h>

int main( )
{
       int i, n, x, arr[100];

       printf("How many numbers? ");
       scanf("%d", &n);
       printf("\nEnter numbers\n");
       printf("\n\n");

       for(i = 0; i < n; i++)
              scanf("%d", &arr[i]);

       printf("\n\n");
       printf("Enter the position to delete an element? ");
       scanf("%d", &x);
       printf("\n\n");


       for(i = x - 1; i < n; i++)
              arr[i] = arr[i + 1];

       printf("New array\n");
       for(i = 0; i < n - 1; i++)
              printf("%d   ", arr[i]);
       printf("\n");
}
