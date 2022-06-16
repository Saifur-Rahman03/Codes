#include<stdio.h>
int main ()
{
    int marks[60],i,n,s;
    float avg;
    s=0;
    printf("Enter the number of students: ");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
            printf("Enter marks of student %d: ",i);
            scanf("%d",&marks[i]);
            s+=marks[i];
avg=s/n;
    }

    printf("sum= %d\n",s);
    printf("Average= %f",avg);
}
