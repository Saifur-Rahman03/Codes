#include<stdio.h>
int reverse(int n);
int main(){
   int n;
   printf("Enter an positive integer\n");
   scanf("%d",&n);
   printf("The reverse of %d is %d\n",n,reverse(n));
}
int reverse(int n){
   int r=0;
   while(n!=0){
   r=r*10+n%10;
   n=n/10;}
   return r;
}
