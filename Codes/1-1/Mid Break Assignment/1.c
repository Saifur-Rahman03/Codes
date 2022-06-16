#include<stdio.h>
int main()
{
    int marks[100],subject,n,s=0;
    float p;

    printf("Enter the number of subjects: ");
    scanf("%d",&subject);

    for(n=0;n<subject;n++)
    {
    printf("\nsubject no%d = ",n+1);
    scanf("%d",&marks[n]);
    s+=marks[n];
    }

    printf("\nSum of the marks is = %d \n",s);

    p=s/subject;
    printf("\nThe percentage is = %.2f\n",p);




    return 0;


}
