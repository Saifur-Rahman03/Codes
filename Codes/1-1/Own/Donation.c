#include<stdio.h>
int main()
{
    int T,K[100],N,n,i,acc=0;
    scanf("%d",&n);
    for(T=0;T<n;T++)
    {
        scanf("%d",&N);
        for(i=0;i<N;i++){
            printf("donate ");
            scanf("%d",&K[i]);
            }
            printf("report\n");

        for(i=0;i<N;i++){
            acc+=K[i];
        }}
        for(i=0;i<N;i++){
            printf("\ncase %d:\n%d",i+1,K[i]);
            printf("\n%d",acc);
        }
        return 0;




}
