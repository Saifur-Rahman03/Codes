#include <stdio.h>

int main( )
{
       long int n, x, y, z, k = 1;

       scanf("%ld", &n);
       for(long int i = 0; i <= n; i++){
              for(long int j = 2; j < i; j++){
                     if(i % j == 0)
                            break;
                     else if(i == j + 1)
                            x = i;
              }
       }
       if(n == 2)
              printf("%ld\n", k);
       else if(n == x)
              printf("%ld\n", k);
       else{
              y = n - x;
              if(y == 2 || y == 3)
                     printf("%ld\n", k + k);
              else if(y == 1){
                     printf("%ld\n", k + y);}
              else if(y > 0){
                     for(long int i = 1; i < y; i++)
                            if(y % i == 0)
                                   z = y / i;
                     printf("%ld\n", k + z);}
              }
       return 0;
}
