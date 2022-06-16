#include<stdio.h>
#include<stdlib.h>

int main()
{
    int firstnum=1,secondnum=1,i,temp;

    printf("%d,%d,",firstnum,secondnum);

    for(i=0;i<18;i++)
        {

        temp=secondnum;
        secondnum+=firstnum;
        firstnum=temp;

        if(i<17)
            printf("%d,",secondnum);
        else
            printf("%d",secondnum);
        }
return 0;
}
