#include<stdio.h>
void main ()

{
    float a[10][10],b[10][10],c[10][10];
    int i,j,m,n;

    printf("Enter the order \n");
    printf("Enter row:");
    scanf("%d",&m);
    printf("Enter column:");
    scanf("%d",&n);



    printf("\nEnter the elements of matrix 1\n");

    for(i=0;i<m;i++){

        for(j=0;j<n;j++){

                printf("Enter a%d%d:",i+1,j+1);

            scanf("%f",&a[i][j]);

        }
    }
    printf("\nEnter the elements of matrix b\n");


    for(i=0;i<m;i++){

        for(j=0;j<n;j++){


                printf("Enter b%d%d:",i+1,j+1);

            scanf("%f",&b[i][j]);
        }
    }

        for(i=0;i<m;i++){
        for(j=0;j<n;j++){
    c[i][j]=a[i][j]+b[i][j];
        }
        }

printf("\nSum of matrix is:\n");
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            printf("%0.1f\t",c[i][j]);
            if(j==n-1)
                   printf("\n");
        }
    }
}
