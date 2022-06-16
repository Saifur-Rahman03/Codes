#include<stdio.h>
int main ()
{
    int i,n;
    float arr[100];
    printf("Enter the number of elements (1 to 100): ");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        printf("Enter number %d: ",i);
        scanf("%f",&arr[i]);


    if(arr[0]<arr[i])
        arr[0]=arr[i];
    }
    printf("The largest element= %f",arr[0]);

}
