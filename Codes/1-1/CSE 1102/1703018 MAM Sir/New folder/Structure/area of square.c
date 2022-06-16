
#include<stdio.h>
struct sqr
{
    double a,A;
};
int main()
{
    struct sqr ob1[10];
    int i,n,x;
    double sum=0.0;
    printf("How many times you want to calculate: ");
    scanf("%d",&n);
    printf("\n");
    for(i=0;i<n;i++){
        printf("Enter side of square%d: ",i+1);
        scanf("%lf",&ob1[i].a);
    }
    printf("\n");
    for(i=0;i<n;i++)
        ob1[i].A=ob1[i].a*ob1[i].a;
    for(i=0;i<n;i++)
        printf("The Area of square%d is = %0.2lf\n",i+1,ob1[i].a);
    printf("\nEnter the value of x:");
    scanf("%d",&x);
    printf("\nThe areas which are greater than %d square\n\n",x);
    for(i=0;i<n;i++)
    {
        if(ob1[i].a>x)
        {
            printf("The area of square%d is %0.2lf\n",i+1,ob1[i].a);
        }
    }
    printf("\n");
    for(i=0;i<n;i++)
    {
        sum+=ob1[i].a;
    }
    printf("The sum of all areas is = %0.2lf\n",sum);
    return 0;
}

