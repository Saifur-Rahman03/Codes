#include<stdio.h>
#include<math.h>

int main ()

{
        float a,b,c,d,t,root1,root2;
        printf("Enter the value of a:");
        scanf("%f",&a);
        printf("Enter the value of b:");
        scanf("%f",&b);
        printf("Enter the value of c:");
        scanf("%f",&c);
        t=(b*b-4*a*c);
        if (t>=0)
        {
        d=sqrt(t);
        root1=(-b+d)/(2*a);
        root2=(-b-d)/(2*a);
        printf("root1: %0.2f & root 2: %0.2f",root1,root2);}
        else
            printf("All roots are imaginary");
        return 0;
}
