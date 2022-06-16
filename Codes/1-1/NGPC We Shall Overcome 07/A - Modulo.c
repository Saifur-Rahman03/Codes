#include <stdio.h>
#include <math.h>

main( )

{
       int t, i, a, x[1000];

       for(t = 0; t < 10; t++)
       {
              scanf("%d", &i);
              a = i % 42;
              x[t] = a;
       }
       for(t = 0; t < 10; t++)
              printf("%d\n", x[t]);
}
