#include <stdio.h>
#define PI 3.14159

double process(double radius);
int main( )
{
     int i = 0, n;
     struct
     {
          char text[100];
          double radius;
          double area;
     } circle[100];

     printf("To Stop, enter END for the identifier\n");
     printf("\nIdentifier: ");
     scanf("%s", circle[i].text);

     while(circle[i].text[0] != 'E' || circle[i].text[1] != 'N' || circle[i].text[2] != 'D')
     {
          printf("Radius = ");
          scanf("%lf", &circle[i].radius);

          if(circle[i].radius < 0)
               circle[i].area = 0;
          else
               circle[i].area = process(circle[i].radius);

          ++i;

          printf("\nIdentifier: ");
          scanf("%s", circle[i].text);
     }

     n = --i;

     printf("\nSummary of Results\n\n");
     for(i = 0; i <= n; i++)
     {
          printf("%s\tRadius: %.2lf\tArea: %.2lf\n", circle[i].text, circle[i].radius, circle[i].area);
     }

     return 0;
}
double process(double r)
{
     double a;

     a = PI * r * r;

     return (a);
}
