#include<stdio.h>
void main()

{
    int a,i,j,n,number[100];
    printf("Enter the value of n:\n");
    scanf("%d",&n);

    printf("Enter the elements of the array:\n");
    for(i=0;i<n;i++){
        scanf("%d",&number[i]);
    }

    for(i=0;i<n;i++){
        for(j=i+1;j<n;j++){
            if(number[i]<number[j]){
                a=number[i];
                number[i]=number[j];
                number[j]=a;}
        }
    }

    printf("The numbers arranged in descending order are given below:\n");
    for(i=0;i<n;i++){
        printf("%d\n",number[i]);
    }
}
