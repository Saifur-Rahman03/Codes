#include<stdio.h>
int main()

{
    int i,j,n;
    printf("Enter the value of n: ");
    scanf("%d",&n);
    printf("Prime numbers\n2\t");

    for(i=3;;i++){
        for(j=2;j<i;j++){
            if(i%j==0)
                break;
            else if(i==j+1)
                printf("%d\t",i);
    }
    }
    return 0;
}
