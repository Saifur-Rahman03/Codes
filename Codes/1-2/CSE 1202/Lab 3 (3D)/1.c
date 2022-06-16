#include <stdio.h>

int top = -1;
int n = 10;
int a[10];

void push( );
void pop( );

int main( )
{
       int i, no;

       while(1)
       {
              printf("1. Push\n2. Pop\n3. Display\n4. Exit\n\tEnter your option (1 - 4)\n");
              scanf("%d", &no);

              if(no == 1){
                     push( );
              }
              if(no == 2){
                     pop( );
              }
              if(no == 3){
                     if(top < 0)
                            printf("\nArray Empty\n");
                     else{
                            printf("\nArray\n");
                            for(i = 0; i <= top; i++)
                                   printf("%d   ", a[i]);
                            printf("\n");
                            }
              }
              if(no == 4)
                     break;
              printf("\n\n");
       }

}
void push ( )
{
       int x;

       if(top < n - 1){
              top++;
              printf("Enter value = ");
              scanf("%d", &x);
              a[top] = x;
       }
       else
              printf("\nArray Full\n\n");

}
void pop ( )
{
       if(top < 0)
              printf("\nArray Empty\n\n");
       else{
              printf("\n%d\n", a[top]);
              top--;
       }
}
