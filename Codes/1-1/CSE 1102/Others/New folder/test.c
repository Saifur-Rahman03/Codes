#include<stdio.h>
int main()
{
    int marks[61],r,hm,lm,hr,lr;
    for(r=0;r<60;r++){
        marks[r]=rand()%101;

    printf("Roll no=%d & Marks=%d\n",r+1,marks[r]);}

    {
    hm = marks[0];
    for(r=0;r<60;r++)
       {
           if(marks[r]>hm){
        hm = marks[r];
        hr = r+1;}
       }
        printf("Biggest number = %d & Roll no: %d",hm,hr);
    }
    {
        lm = marks[0];
        for(r=0;r<60;r++)
        {
            if(marks[r]<lm){
                lm=marks[r];
                lr=r+1;}
        }
        printf("\nLowest number= %d & Roll no: %d",lm,lr);}
        {
            printf("\nHighest Marks Roll:");
    for (r=0;r<60;r++){
        if(marks[r]==hm){
            printf("%d ",r+1);
        }
    }
        }
        {
            printf("\nLowest marks Roll:");
            for (r=0;r<60;r++){
                if(marks[r]==lm){
                    printf("%d ",r+1);
                }
            }
        }


}



