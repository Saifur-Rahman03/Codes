#include <stdio.h>

int main( )
{
       int x[10] = {10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20};
       int i;

       for(i = 0; i <= 10; i++){
              printf("i = %d   x[i] = %d   *(x + i) = %d\n", i, x[i], *(x + i));
       }
       printf("\n\n");

       for(i = 0; i < 10; i++){
              printf("i = %d   &x[i] = %d   (x + i) = %d\n", i, &x[i], (x + i));
       }

}
