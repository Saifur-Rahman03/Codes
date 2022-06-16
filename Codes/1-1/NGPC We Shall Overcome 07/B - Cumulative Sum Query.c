#include <stdio.h>

int main( )

{
       int N, Q, i, j, nn[100000], sum = 0;

       scanf("%d", &N);

       for(int x = 0; x < N; x++)
              scanf("%d", &nn[x]);

       scanf("%d", &Q);
       while(Q){
              scanf("%d %d", &i, &j);
              while(i <= j)
                     sum += nn[i++];
              printf("%d\n", sum);
              sum = 0;
              Q--;
       }
       return 0;
}
