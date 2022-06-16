#include <iostream>
#include <string>
using namespace std;

#define SIZE 10
int front = 0;
int rear = 0;
class queue{
    int q[SIZE];
public:
    queue();
    void enqueue(int x);
    int dequeue(int y);
};

int main()
{
    queue s1;
    int i, n, n1;
    int a[SIZE];

    cout << "How many numbers you want to enqueue: ";
    cin >> n1;
    cout << "Enter numbers\n";
    for(i = 0; i < n1; i++)
        s1.enqueue(a[i]);
    cout << "How many times you want to dequeue\n";
    cin >> n;
    if(n > n1){
        cout << "Invalid input\n";
        return 0;
    }
    for(i = 0; i < n; i++)
        cout << "dequeue no" << i + 1 << ": " << s1.dequeue(a[i]) << endl;


    return 0;
}
queue :: queue()
{
    cout << "Constructing a queue\n";
}
void queue :: enqueue(int x)
{
    if(rear == SIZE - 1){
        rear = 0;
        if(rear == front){
            rear = SIZE - 1;
            cout << "Queue Empty\n";
        }
        else{
            cin >> x;
            q[rear] = x;
        }
    }
    if(rear + 1 == front)
        cout << "Queue Full\n";
    else{
        rear++;
        cin >> x;
        q[rear] = x;
    }
}
int queue :: dequeue(int y)
{  if(rear == front)
        cout << "Queue Empty\n";
    else{
        if(front == SIZE - 1){
            front = 0;
            y = q[front];
        }
        else{
            front++;
            y = q[front];
        }
    }
    return y;
}
