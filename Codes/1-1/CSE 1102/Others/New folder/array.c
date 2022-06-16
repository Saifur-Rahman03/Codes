#include<stdio.h>
int main ()
{
    int ax[6];
    int i,sum;
    float avg;

    for (i=0;i<6;i++)
        //scanf("%d",&ax[i]);
        ax[i]=rand()% 1001;
    for (i=0;i<6;i++)
        printf("ax[%d]%d\n",ax[i]);

    for (i=0;i<6;i++)
        sum+=ax[i];

    printf("First Prize=%d",rand()%1000+1);

}
