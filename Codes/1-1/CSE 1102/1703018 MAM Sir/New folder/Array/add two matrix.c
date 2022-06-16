#include<stdio.h>
int main()
{
    int a[10][10],b[10][10],c[10][10];
    int i,j,r,col;
    printf("Enter row number of those matrix: ");
    scanf("%d",&r);
    printf("Enter column number of those matrix: ");
    scanf("%d",&col);
    printf("\nEnter the elements of 1st matrix\n");

    for(i=0;i<r;i++){
        for(j=0;j<col;j++){
            printf("Enter a%d%d: ",i+1,j+1);
            scanf("%d",&a[i][j]);
        }
    }
    printf("\nEnter the elements of 2nd Matrix\n");
        for(i=0;i<r;i++){
        for(j=0;j<col;j++){
            printf("Enter b%d%d: ",i+1,j+1);
            scanf("%d",&b[i][j]);
        }
    }
        for(i=0;i<r;i++){
        for(j=0;j<col;j++){
                c[i][j]=a[i][j]+b[i][j];
        }
    }
    printf("\nSum\n");
        for(i=0;i<r;i++){
        for(j=0;j<col;j++){
            printf("%d\t",c[i][j]);
            if(j==col-1){
            printf("\n");}
        }
    }

    return 0;
}
