#include<stdio.h>
int main()

{
    int i,n,fn=0,sn=1,temp=0;
    printf("Enter the value of n: ");
    scanf("%d",&n);
    printf("%d,%d,",fn,sn);

    for(i=1;i<=n;i++){
            temp=sn;
            sn+=fn;
            fn=temp;

    if(i<n)
        printf("%d,",sn);
    else
        printf("%d",sn);

    }

    return 0;

}
