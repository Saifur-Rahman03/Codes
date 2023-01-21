#include<stdio.h>
main()
{
    int i, j, k, r, c, t=1;
    printf("Enter number of rows: ");
    scanf("%d", &r);
    c=r-1;

    for(i=1; i<=r; i++)
    {
        for(j=1; j<=c; j++)
        {
            printf(" ");
        }
        for(k=1; k<=t; k++)
        {
            printf("*");
        }
        c--;
        t+=2;
        printf("\n");
    }
    return 0;
}
