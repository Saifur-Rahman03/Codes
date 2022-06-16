#include <stdio.h>

int main( )
{
       int n, k, i, a[100], c = 0;

       scanf("%d %d", &n, &k);

       for(i = 1; i <= n; i++)
              scanf("%d", &a[i]);

       if(a[k] > 0){
              for(i = 1; i <= n; i++){
                     if(a[i] >= a[k])
                            c++;
                     }
              }
       else if(a[k] == 0)
       {
              for(i = 1; i <= n; i++){
                     if(a[i] > 0)
                            c++;
              }
       }
       else
              c = 0;
       printf("%d\n", c);
}
