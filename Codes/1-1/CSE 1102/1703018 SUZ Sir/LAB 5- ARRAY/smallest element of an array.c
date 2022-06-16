#include<stdio.h>
int main()
{
    int i,n;
    float arr[100];
    printf("Enter the number of elements:");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        printf("Enter number %d: ",i);
        scanf("%f",&arr[i]);}


    for(i=1;i<=n;i++){

    if(arr[1]>arr[i])
        arr[1]=arr[i];
    }
    printf("Smallest= %f",arr[1]);
}
