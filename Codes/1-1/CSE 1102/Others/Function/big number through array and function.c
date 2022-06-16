#include<stdio.h>

int Big(int a[], int N);
int main()
{

    int num[100],i,r,n;
    printf("Enter the number of array:");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&num[i]);
    }
    r=Big(num,n);
    printf("Big is=%d",r);
return 0;
}
int Big(int a[], int N){
    int s,i,j,t;
    for(i=0;i<N;i++){
        for(j=i+1;j<N;j++){
            if(a[i]>a[j]){
              t=a[i];

            }
        }
    }
return t;}


