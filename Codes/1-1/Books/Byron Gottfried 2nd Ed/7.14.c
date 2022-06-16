#include <stdio.h>

long int fact (int n);

main( )

{
       int n;
       long int fact (int n);

       printf("To stop enter \"0\"\n");
       while(1){
              printf("\n\nn = ");
              scanf("%d", &n);
              if(n == 0)
                     break;
              else
                     printf("\nn! = %ld\n", fact(n));
       }
       printf("\nFuck You\n\n");
}

long int fact (int n)
{
       if(n <= 1)
              return (1);
       else
              return(n * fact(n-1));
}
