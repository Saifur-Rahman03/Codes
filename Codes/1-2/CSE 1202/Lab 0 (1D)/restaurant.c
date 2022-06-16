#include <stdio.h>

int main( )
{
       int n, a1, a2, a3, aa1, aa2, aa3, x, sum = 0, i = 0, j = 0, g, b, n1;
       char c;

       while(1)
       {
              printf("Choose items\n1. Pizza\t80tk\n2. Burger\t50tk\n3. Soft Drinks\t20tk\n4. Done\n");
              scanf("%d", &n);

              if(n == 1){
                     printf("How many? ");
                     scanf("%d", &a1);
                     sum += (a1 * 80);
                     }
              if(n == 2){
                     printf("How many? ");
                     scanf("%d", &a2);
                     sum += (a2 * 50);
                     }
              if(n == 3){
                     printf("How many? ");
                     scanf("%d", &a3);
                     sum += (a3 * 20);
                     }
              if(n == 4)
                     break;

              }

              while(1){
                     printf("You wanna cancel any ?(Y / N)\n");
                     scanf(" %c", &c);

                     if((c == 'y') || (c == 'Y')){
                            printf("which one?\n");
                            scanf("%d", &n1);

                            if(n1 == 1){
                                   printf("How many? ");
                                   scanf("%d", &aa1);
                                   if(aa1 > a1)
                                          printf("Error\nTry again\n");
                                   else
                                          sum -= (aa1 * 80);
                                   }
                            if(n1 == 2){
                                   printf("How many? ");
                                   scanf("%d", &aa2);
                                   if(aa2 > a2)
                                          printf("Error\nTry again\n");
                                   else
                                          sum -= (aa2 * 50);
                                   }
                            if(n1 == 3){
                                   printf("How many? ");
                                   scanf("%d", &aa3);
                                   if(aa3 > a3)
                                          printf("Error\nTry again\n");
                                   else
                                          sum -= (aa3 * 20);
                                   }
                            }

                            else if((c == 'n') || (c == 'N'))
                                   break;
                     }

                     printf("\nBill = %d\n", sum);
                     printf("\nMoney = ");
                     scanf("%d", &g);
                     b = g - sum;
                     printf("\n\n%d, Take your money sir\n\n\nThank You... Come again\n", b);

              return 0;
}
