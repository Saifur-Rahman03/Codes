#include <stdio.h>
#define PI 3.14159

double process (double radius);

int main( )
{
     int n;
     double radius, area;

     printf("TO STOP, enter 0 for radius\n\n");
     printf("Radius = ? ");
     scanf("%lf", &radius);

     while(radius)
     {
          if(radius < 0)
               area = 0;
          else
               area = process(radius);

          printf("Area = %.2lf\n\n", area);
          printf("Radius = ? ");
          scanf("%lf", &radius);
     }
}
double process (double r)
{
     double a;

     a = PI * r * r;

     return (a);
}
