#include<stdio.h>
int n=0;
int sum(int x);

int main()
{
    int n;
    scanf("%d",&n);
    printf("%d",factorial(n));

}
int factorial(int n){
    if(n==1){
        return 1;}

    return n+factorial(n-1);
}


