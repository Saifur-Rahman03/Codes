#include<stdio.h>

int add(int a[], int N);
int main()
{
    int num[10],i,r;
    for(i=0;i<10;i++){
        scanf("%d",&num[i]);
    }
    r=add(num,10);
    printf("%d",r);
    return 0;
}
int add(int a[],int N){
    int s=0,i;
    for(i=0;i<N;i++){
        s+=a[i];
    }
    return s;

}
