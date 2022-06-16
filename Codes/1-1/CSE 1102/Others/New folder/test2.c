#include<stdio.h>
int main ()
{
    int marks[60],r,hm,lm,hr,lr;



       for(r=0;r<60;r++)
 {

        marks[r]=rand () % 101;
        printf("Roll no: %d & Marks= %d\n",r+1,marks[r]);
    }

    {
        hm=marks[0];
        for(r=0;r<60;r++)

        if (marks[r]>hm){
        hm=marks[r];
        hr=r+1;
        }
    }
        printf("Roll no: %d & Highest marks= %d\n",hr,hm);
        {
            lm=marks[0];
            for(r=0;r<60;r++)
            {
              if(marks[r]<lm){
                lm=marks[r];
                lr=r+1;
              }
            }
            printf("Roll no: %d & Lowest marks= %d\n",lr,lm);
        }
        {   printf("Highest marks Roll no: ");
            for(r=0;r<60;r++)
                if(marks[r]==hm)
            {
                printf(" %d",r+1);
}
        }
        {
            printf("\nLowest marks Roll no:");
            for(r=0;r<60;r++)
            if(marks[r]==lm)
            {
                printf(" %d",r+1);
            }
        }
}


