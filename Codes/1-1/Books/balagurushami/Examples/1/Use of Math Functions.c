#include<math.h>
#define PI 3.1416
#define MAX 180
main()
{
     int angle = 0;
     float x, y;

     printf("Angle\tCos(Angle)\n\n");

     while(angle<=MAX)
     {
          x = (angle*PI)/180;
          y = cos(x);
          printf("%2d\t%8.5f\n", angle, y);
          angle += 10;
     }
}
