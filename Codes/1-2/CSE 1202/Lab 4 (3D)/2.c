#include <stdio.h>

int x, n = 4, a[10];
int rear = 0, front = 0;

void enqueqe(int x);
void dequeue(int x);

int main( )
{
       int no, i;

       while(1){
              printf("1. Enqueue\n2. Dequeue\n3. Display\n4. Exit\n\tEnter your option (1 - 4)\n");
              scanf("%d", &no);
              if(no == 1){
                     printf("Enter value = ");
                     scanf("%d", &x);
                     printf("\n");
                     enqueqe(x);
              }
              if(no == 2){
                     dequeue(x);
              }
              if(no == 3){
                     if(rear == front)
                            printf("\nQueue Empty\n");
                     else if(rear > front){
                            printf("\nArray\n");
                            for(i = front + 1; i <= rear; i++)
                                   printf("%d   ", a[i]);
                            printf("\n");
                            }
                     else if(front > rear){
                            printf("\nArray\n");
                            for(i = front + 1; i < n; i++)
                                   printf("%d   ", a[i]);
                            for(i = 0; i <= rear; i++)
                                   printf("%d   ", a[i]);

                            printf("\n");
                     }
              }
              if(no == 4)
                     break;
              printf("\n\n");
       }

       return 0;
}
void enqueqe(int x)
{
       if(rear == n - 1){
              rear = 0;
              if(rear == front){
                     rear = n - 1;
                     printf("Queue Full\n");
              }
              else
                     a[rear] = x;
       }
       else{
              if(rear + 1 == front)
                     printf("Queue Full\n");
              else{
                     rear++;
                     a[rear] = x;
              }
       }

}
void dequeue(int x)
{
       if(rear == front)
              printf("Queue Empty\n\n");
       else{
              if(front == n - 1){
                     front = 0;
                     x = a[front];
              }
              else{
                     front++;
                     x = a[front];
              }

       }
}
