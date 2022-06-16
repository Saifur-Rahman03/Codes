#include <stdio.h>
#include <stdlib.h>

void reorder(int n, int *x);

main( )
{
       int i, n, *x;

       printf("How many numbers? ");
       scanf("%d", &n);

       x = (int *) malloc(n * sizeof(int));

       for(i = 0; i < n; i++){
              printf("i = %d\tx = ", i + 1);
              scanf("%d", x + i);
       }

       reorder(n, x);

       printf("\n\nReorder list of numbers\n\n");

       for(i = 0; i < n; ++i)
              printf("i = %d\tx = %d\n", i + 1, *(x + i) );

}

void reorder(int n, int *x)
{
       int temp;
       for(int i = 0; i < n - 1; i++){
              for(int j = i + 1; j < n; j++){
                     if(*(x + i) > *(x + j)){
                            temp = *(x + i);
                            *(x + i) = *(x + j);
                            *(x + j) = temp;
                     }
              }
       }
       return;
}
