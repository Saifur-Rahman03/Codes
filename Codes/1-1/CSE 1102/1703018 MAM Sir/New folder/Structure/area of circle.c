#include<stdio.h>
struct cir
{
    double r,a;
};
int main()
{
    struct cir ob1[10];
    int i,n,x;
    double sum=0.0;
    printf("How many times you want to calculate: ");
    scanf("%d",&n);
    printf("\n");
    for(i=0;i<n;i++){
        printf("Enter radios of circle%d: ",i+1);
        scanf("%lf",&ob1[i].r);
    }
    printf("\n");
    for(i=0;i<n;i++)
        ob1[i].a=3.14159*ob1[i].r;
    for(i=0;i<n;i++)
        printf("The Area of circle%d is = %0.2lf\n",i+1,ob1[i].a);
    printf("\nEnter the value of x:");
    scanf("%d",&x);
    printf("\nThe areas which are greater than %d square\n\n",x);
    for(i=0;i<n;i++)
    {
        if(ob1[i].a>x)
        {
            printf("The area of circle%d is %0.2lf\n",i+1,ob1[i].a);
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

