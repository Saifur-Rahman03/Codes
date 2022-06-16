#include <stdio.h>

int main( )
{
       int x, m, n, a[100], i , j, n1, n2 = 0, x1, f, count = 0;


       while(1)
       {
              printf("1. Insert\n2. Delete\n3. Display\n4. Exit\n\tEnter your option(1 - 4)\n\n");
              scanf("%d", &n);
              printf("\n\n");

              if(n == 1)
              {
                     printf("Enter position = ");
                     scanf("%d", &m);

                     printf("Enter value = ");
                     scanf("%d", &x);

                     a[m] = x;
                     if(m >= n2)
                            n2 = m;
                     count++;
              }
              else if(n == 2)
              {
                     if(count == 0)
                            printf("The array is empty\n\n\n");
                     else{
                            printf("Enter value to delete = ");
                            scanf("%d", &x1);

                            for(i = 0; i <= n2; i ++)
                                   if(a[i] == x1)
                                          break;

                            for(j = i; j < n2; j ++)
                                   a[j] = a[j + 1];
                            printf("\nDeleted\n\n");
                            n2--;
                            count--;
                     }
              }
              else if(n == 3)
              {      if(count == 0)
                            printf("The array is empty\n\n\n");
                     else{
                            printf("\n\nNew array\n");
                                   for(i = 0; i < n2 + 1; i ++)
                                          printf("%d ", a[i]);
                                   printf("\n\n\n");
                            }
              }
              else if(n == 4)
                     break;
       }
       return 0;
}
