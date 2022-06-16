#include<stdio.h>
int main()

{
    int n,i,a,b;
    double c;
    printf("Choice\tResult\n");
    for(n=1;n<=5;n++){
    printf("%d\t",n);
    if(n==1)
        printf("Add\n");
    if(n==2)
        printf("Subtract\n");
    if(n==3)
        printf("Multiply\n");
    if(n==4)
        printf("Divide\n");
    if(n==5)
        printf("Remainder\n");
    }
    printf("\nEnter your choice: ");
    scanf("%d",&i);
    printf("\nEnter A: ");
    scanf("%d",&a);
    printf("Enter B: ");
    scanf("%d",&b);

    if(i>0 && i<=5){
        if(i==1){
            c=a+b;
            printf("\nAnswer = %.2lf\n",c);
        }
        if(i==2){
            c=a-b;
            printf("\nAnswer = %.2lf\n",c);
        }
        if(i==3){
            c=a*b;
            printf("\nAnswer = %.2lf\n",c);
        }
        if(i==4){
            c=a/b;
            printf("\nAnswer = %.2lf\n",c);
        }
        if(i==5){
           c=a%b;
            printf("\nAnswer = %.2lf\n",c);
           }
    }
    else
        printf("\nWrong Keyword... Try again..\n");

    return 0;
}
