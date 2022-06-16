#include<stdio.h>
int main()
{
    int a[10],b[10];
    int i,k,j,r;
    printf("Enter size of 1D matrix: ");
    scanf("%d",&r);

    printf("\nEnter the elements\n");
    for(i=0;i<r;i++){
        printf("a%d: ",i+1);
        scanf("%d",&a[i]);
    }
    printf("\nMatrix\n");
    for(i=0;i<r;i++){
        printf("%d\n",a[i]);
    }
    printf("\nNow, Enter the location you want to input a number: ");
    scanf("%d",&k);

    if(k>r || k<0){
        printf("\nInvalid Input...\n");}
    else
    {
        for(i=r-1;i>=k;i--)
            a[i+1]=a[i];
            printf("Enter the number You want to Insert: ");
            scanf("%d",&a[k-1]);
            r++;

        printf("\nAfter insert array contains\n");
        for(i=0;i<r;i++){
            printf("%d\n",a[i]);}
        }
    return 0;
}
