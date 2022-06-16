#include<stdio.h>
int main()
{
    int a,b;
    char op;
    double ans;

    printf("\nEnter your calculation\n\n");
    scanf("%d %c %d",&a, &op, &b);

    if(op=='+'){
        ans=a+b;
        printf("= %.2lf\n",ans);
    }
    if(op=='-'){
        ans=a-b;
        printf("= %.2lf\n",ans);
    }
    if(op=='*'){
        ans=a*b;
        printf("= %.2lf\n",ans);
    }
    if(op=='/'){
        ans=a/b;
        printf("= %.2lf\n",ans);
    }
    if(op=='%'){
        ans=a%b;
        printf("= %.2lf\n",ans);
    }
    return 0;
}
