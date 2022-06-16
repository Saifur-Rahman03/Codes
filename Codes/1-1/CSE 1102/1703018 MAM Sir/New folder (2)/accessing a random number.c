#include<stdio.h>
#include<stdlib.h>
int main()
{
   int a,n,i;
   printf("Enter range\n");
   scanf("%d",&n);
   for(i=0;i<n;i++){
   a = rand()%10 + 1;
   printf("%d\n",a);}
}
