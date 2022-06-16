#include <stdio.h>

main( )
{
       int num[1000], t, n;

       scanf("%d", &t);
       while(t)
       {
              scanf("%d",&n);
              for(int i = 0; i < n; i++)
                     num[i] = i + 1;
              for(int i = 0; i < n; i++){
                            for(int j = 2; j < i; j++){
                                   if(num[i] % j == 0)
                                          num[i] = 0;
                            }
              }
              for(int i = 0; i < n; i++)
                     if(num[i] != 0)
                            printf("%d\n", num[i]);
              t--;
       }
}
