#include <stdio.h>
#define PI 3.14159

double process (double radius);

int main( )
{
     double radius, area;
     int n, c;

     printf("How many circles? ");
     scanf("%d",&n);
     printf("\n");

     for(c=0; c< n; c++)
     {
          printf("Radius = ? ");
          scanf("%lf", &radius);

          if(radius < 0)
               area = 0;
          else
               area = process(radius);

          printf("Area = %.2lf\n\n", area);

     }

     return 0;

}
double process (double r)
{
     double a;

     a = PI * r * r;

     return (a);
}
