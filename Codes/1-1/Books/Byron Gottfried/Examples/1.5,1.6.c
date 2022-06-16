/* program to calculate the area of a circle continuously */

#include <stdio.h>

main()
{
     double radius, area;
     char s[10];

     while(1){
          printf( "Radius = ?\n" );
          scanf( "%lf", &radius );
          area = 3.1415 * radius * radius;
          printf( "\nArea = %.3lf\n", area );
          printf( "\nDo you wish to repeat the calculation?\n");
          scanf( "%s",&s);
          printf( "\n\n");

          if( s[0] == 'y' || s[0] == 'Y')
               continue;
          else if( s[0] == 'n' || s[0] == 'N')
          {
               printf("Good Bye\n");
               break;
          }
          else
               printf( "Invalid answer... Try again\n");
     }

}
