#include <stdio.h>

int linecount(void);

main( )
{
       int n, sum = 0, count = 0;
       double average;

       printf("Enter the text below\n");

       while((n = linecount( )) > 0)
       {
              sum += n;
              count++;
       }
       average = (1.0 * sum) / count;
       printf("\nAverage number of characters per line: %5.2lf\n", average);
}

int linecount(void)
{
       int count = 0;
       char line[100];

       while((line[count] = getchar( )) != '\n')
              count++;

       return (count);
}
