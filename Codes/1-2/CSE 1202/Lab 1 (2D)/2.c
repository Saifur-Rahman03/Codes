#include <stdio.h>

int main( )
{
       int x, i, a[100], m, j, n;

       printf("Number of array elements = ");
       scanf("%d", &n);
       printf("\nArray:\n");

       for(i = 0; i < n; i ++)
              scanf("%d", &a[i]);
       printf("\n");

       printf("Enter value to delete = ");
       scanf("%d", &x);

       for(i = 0; i < n; i ++)
              if(a[i] == x)
                            break;

       for(j = i; j < n - 1; j ++)
                     a[j] = a[j + 1];

       printf("\nNew array\n");
       for(i = 0; i < n - 1; i ++)
              printf("%d ", a[i]);
       printf("\n");

       return 0;
}
