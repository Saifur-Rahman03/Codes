#include <stdio.h>
#include<stdlib.h>
int main()
{
    int T,i,n,j;
    int o=0,L,R;
        scanf("%d %d",&L,&R);

    if(L%2==0){
        n=L+1;
        for(i=n;i<=R;i+=2)
            o++;
    }
    else{
        n=L;
        for(i=n;i<=R;i+=2)
            o++;
    }
   printf("%d\n",o);
}
