#include <stdio.h>

#define SIZE 100

void reorder(int n, int x[ ]);

main( )
{
       int i, n, x[SIZE];

       printf("How many numbers will be entered?\n");
       scanf("%d", &n);
       printf("\n");

       for(i = 0; i < n; i++)
       {
              printf("i = %d\tx = ", i + 1);
              scanf("%d", &x[i]);
       }

       reorder(n, x);
       printf("\n\n");

       for(i = 0; i < n; i++){
              printf("i = %d\tx = %5.2d\n", i + 1, x[i]);
       }
}
void reorder(int n, int x[ ])
{
       int temp;

       for(int i = 0; i < n - 1; i++){
              for(int j = i + 1; j < n; j++){
                            if(x[i] > x[j]){
                                   temp = x[i];
                                   x[i] = x[j];
                                   x[j] = temp;
                            }
              }
       }
       return (x);
}
