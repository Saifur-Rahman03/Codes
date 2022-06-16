#include<stdio.h>
struct tri
{
    double b,h,a;
};
struct cir
{
    double r,a;
};
struct sqr
{
    double a,A;
};
int main()
{
    struct tri ob1[10];
    struct cir ob2[10];
    struct sqr ob3[10];
    int i,n,x;
    double sum=0.0;
    printf("How many times you want to calculate: ");
    scanf("%d",&n);
    printf("\n");
    for(i=0;i<n;i++){
        printf("Enter base & height of triangle%d: ",i+1);
        scanf("%lf %lf",&ob1[i].b,&ob1[i].h);
    }
    printf("\n");
    for(i=0;i<n;i++)
        ob1[i].a=0.5*ob1[i].b*ob1[i].h;
    for(i=0;i<n;i++)
        printf("The Area of triangle%d is = %0.2lf\n",i+1,ob1[i].a);
    printf("\n");

    for(i=0;i<n;i++){
        printf("Enter radios of circle%d: ",i+1);
        scanf("%lf",&ob2[i].r);
    }
    printf("\n");
    for(i=0;i<n;i++)
        ob2[i].a=3.14159*ob2[i].r;
    for(i=0;i<n;i++)
        printf("The Area of circle%d is = %0.2lf\n",i+1,ob2[i].a);
    printf("\n");
        for(i=0;i<n;i++){
        printf("Enter side of square%d: ",i+1);
        scanf("%lf",&ob3[i].a);
    }
    printf("\n");
    for(i=0;i<n;i++)
        ob3[i].A=ob3[i].a*ob3[i].a;
    for(i=0;i<n;i++)
        printf("The Area of square%d is = %0.2lf\n",i+1,ob3[i].A);
    printf("\n");

    printf("\nEnter the value of x:");
    scanf("%d",&x);
    printf("\nThe areas which are greater than %d square\n\n",x);
    for(i=0;i<n;i++)
    {
        if(ob1[i].a>x)
        {
            printf("The area of triangle%d is %0.2lf\n",i+1,ob1[i].a);
        }
    }
    printf("\n");
    for(i=0;i<n;i++)
    {
        if(ob2[i].a>x)
        {
            printf("The area of circle%d is %0.2lf\n",i+1,ob2[i].a);
        }
    }
    printf("\n");
    for(i=0;i<n;i++)
    {
        if(ob3[i].A>x)
        {
            printf("The area of square%d is %0.2lf\n",i+1,ob3[i].A);
        }
    }
    printf("\n");
    for(i=0;i<n;i++)
    {
        sum+=ob1[i].a+ob2[i].a+ob3[i].A;
    }
    printf("The sum of all areas is = %0.2lf\n",sum);
    return 0;
}
