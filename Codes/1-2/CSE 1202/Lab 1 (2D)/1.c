#include <stdio.h>

int main( )
{
       int x, m, n, i, a[100];

       printf("Number of array elements = ");
       scanf("%d", &n);
       printf("\nArray:\n");

       for(i = 0; i < n; i ++)
              scanf("%d", &a[i]);
       printf("\n");

       printf("Enter position\n");
       scanf("%d", &m);

       if((m >= 0) && (m <= n)){
              for(i = n - 1; i >= m; i --)
                     a[i + 1] = a[i];

              printf("Enter new element = ");
              scanf("%d", &x);
              printf("\n");

              a[m] = x;
       }
       else{
              printf("\nNothing changed\n");
              return 0;
              }
       printf("\nNew array\n");
       for(i = 0; i < n + 1; i ++)
              printf("%d ", a[i]);
       printf("\n");

       return 0;
}
