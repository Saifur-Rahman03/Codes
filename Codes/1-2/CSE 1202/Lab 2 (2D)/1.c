#include <stdio.h>

 int main( )

{
       int i, j, n, a[100];

       printf("No. of elements = ");
       scanf("%d", &n);

       printf("\nArray\n");
       for(i = 0; i < n; i++)
              scanf("%d", &a[i]);

       for(i = 0; i < n - 1; i++){
              for(j = 0; j <= n - 2 - i; j++){
                     if(a[j] > a[j + 1]){
                            a[j] = a[j] + a[j + 1];
                            a[j + 1] = a[j] - a[j + 1];
                            a[j] = a[j] - a[j + 1];
                     }
              }
              printf("Sorted Array after iteration no. %d\n", i + 1);
              for(int z = 0; z < n; z++)
                     printf("%d\t", a[z]);
                     printf("\n");
       }
       printf("\n");
}
