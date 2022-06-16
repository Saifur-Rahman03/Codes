#include<stdio.h>
int main()

{
    int arr[10][10],i,j,n;
    printf("Enter the matrix of nxn order\n");
    printf("Enter the value of n: ");
    scanf("%d",&n);
    printf("\n");

    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            printf("Enter a%d%d:",i+1,j+1);
            scanf("%d",&arr[i][j]);
        }
    }
    printf("\nThe matrix is\n");
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
        printf("%d",arr[i][j]);
        printf("\t");
        }
        printf("\n");
    }
    for(i=0;i<n;i++){
                if(arr[0][0]<arr[i][i]){
                    arr[0][0]=arr[i][i];
                }
        }
    printf("\nThe largest number of diagonal element is = %d\n",arr[0][0]);
    return 0;
}
