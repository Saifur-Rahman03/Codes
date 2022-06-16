#include <stdio.h>

int main( )
{
       int n, m, arr[100], i;

       printf("How many numbers? ");
       scanf("%d", &n);
       printf("\nEnter numbers\n");
       printf("\n\n");

       for(i = 0; i < n; i++)
              scanf("%d", &arr[i]);

       printf("\n\n");
       printf("Enter the position of new element? ");
       scanf("%d", &m);
       printf("\n\n");

       for(i = n; i >= m - 1; i--)
              arr[i + 1] = arr[i];

       printf("Enter the new element? ");

       scanf("%d", &arr[m - 1]);
       printf("\n\n");

       printf("New array\n");
       for(i = 0; i < n + 1; i++)
              printf("%d   ", arr[i]);
       printf("\n");

       return 0;
}
