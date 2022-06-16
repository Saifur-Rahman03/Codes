#include <stdio.h>
#include <math.h>

#define TRUE 1
#define FALSE 0

main( )
{
       int flag = TRUE, count = 0;
       double guess, root, test, error;

       printf("Initial guess: ");
       scanf("%lf", &guess);

       while(flag)
       {
              count++;
              if(count == 50)
                     flag = FALSE;
              test = 10. - 3. * guess * guess;
              if(test > 0)
              {
                     root = pow(test, 0.2);
                     printf("\nIteration Number: %2d\n", count);
                     printf("x = %7.5lf\n", root);
                     error = fabs(root - guess);
                     if(error > 0.00001)
                            guess = root;
                     else
                     {
                            flag = FALSE;
                            printf("\n\nroot = %7.5lf\n", root);
                            printf("No. of iterations = %2d\n", count);
                     }
              }
              else
              {
                     flag = FALSE;
                     printf("\nNumbers out of range... Try another initial guess");
              }
              if((count > 50) && (error > 0.00001))
                     printf("\n\nConvergence not obtained after 50 iterations\n");
}
}
