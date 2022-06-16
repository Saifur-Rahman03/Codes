#include <stdio.h>

#define MAXROWS 30
#define MAXCOLS 20

void readinput(int r, int c, int a[ ][MAXCOLS]);
void computesum(int r, int c, int a[ ][MAXCOLS], int b[ ][MAXCOLS], int d[ ][MAXCOLS]);
void writeoutput(int r, int c, int d[ ][MAXCOLS]);

main( )
{
       int x[MAXROWS][MAXCOLS], y[MAXROWS][MAXCOLS], sum[MAXROWS][MAXCOLS];
       int nrows, ncols;

       printf("How many rows? ");
       scanf("%d", &nrows);
       printf("How many columns? ");
       scanf("%d", &ncols);

       printf("\nFirst Matrix\n");
       readinput(nrows, ncols, x);

       printf("\nSecond Matrix\n");
       readinput(nrows, ncols, y);

       computesum(nrows, ncols, x, y, sum);

       printf("\nSum\n");
       writeoutput(nrows, ncols, sum);
}
void readinput(int r, int c, int a[ ][MAXCOLS])
{
       for(int i = 0; i < r; i ++){
              for(int j = 0; j < c; j++)
                     scanf("%d", &a[i][j]);
       }
       return;
}

void computesum(int r, int c, int a[ ][MAXCOLS], int b[ ][MAXCOLS], int d[ ][MAXCOLS])
{
       for(int i = 0; i < r; i ++)
              for(int j = 0; j < r; j ++)
                     d[i][j] = a[i][j] + b [i][j];

       return;
}

void writeoutput(int r, int c, int d[ ][MAXCOLS])
{
       for(int i = 0; i < r; i++){
              for(int j = 0; j < c; j++)
                     printf("%d ", d[i][j]);
              printf("\n");
       }
       return;
}
