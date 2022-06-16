#include <stdio.h>
#define PI 3.14159

double process(double r);
int main( )
{
     int n, i = 0;
     double radius[100], area[100];

     printf("To Stop, enter 0 for radius...\n\n");
     printf("Radius = ? ");
     scanf("%lf", &radius[i]);

     while(radius[i])
     {
          if(radius[i] < 0)
               area[i] = 0;
          else
               area[i] = process(radius[i]);

          printf("Radius = ? ");
          scanf("%lf", &radius[++i]);
     }
     n = --i;
     printf("\n\n");
     printf("Summary of results\n\n");
     for(i = 0; i < n; i++)
          printf("Radius = %.2lf\tArea = %.2lf\n", radius[i], area[i]);

     return 0;
}
double process(double r)
{
     double a;

     a = PI * r * r;

     return (a);
}
