#include<stdio.h>
int main()


{
    int p,d,s,y;
    printf("Enter purchase price: ");
    scanf("%d",&p);
    printf("Enter year of service: ");
    scanf("%d",&y);
    printf("Enter annual depreciation: ");
    scanf("%d",&d);
    s=p-(y*d);
    printf("\nThe salvage value is: %d\n",s);
    return 0;
}
