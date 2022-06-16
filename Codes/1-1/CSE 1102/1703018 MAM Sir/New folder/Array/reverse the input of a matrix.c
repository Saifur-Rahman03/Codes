#include<stdio.h>
int main()
{
    int a[10][10];
    int i,j,r,c;
    printf("Enter row number of those matrix: ");
    scanf("%d",&r);
    printf("Enter column number of those matrix: ");
    scanf("%d",&c);
    printf("\nEnter the elements of matrix\n");

        for(i=0;i<r;i++){
            for(j=0;j<c;j++){
            printf("Enter a%d%d: ",i+1,j+1);
            scanf("%d",&a[i][j]);
        }
    }
    printf("\nReverse\n");

        for(i=0;i<r;i++){
            for(j=c-1;j>=0;j--){
                printf("%d\t",a[i][j]);
            }
                printf("\n");

        }
        return 0;
}
