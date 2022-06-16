#include <iostream>
using namespace std;
void enqueue(int x);
void dequeue();
void display();
int n = 6;
int a[6];
int front = 0, rear = 0;
int main()
{
	int no, x;
	while(1){
		cout << "\n1. Enqueue\n2. Dequeue\n3. Display\n4. Exit\n\tChoose your option\n";
		cin >> no;
		if(no == 1){
			cout << "Enter value: ";
			cin >> x;
			enqueue(x);
			cout << endl;
		}
		if(no == 2)
			dequeue();
		if(no == 3)
			display();
		if(no == 4)
			break;
	}
	return 0;
}
void enqueue(int x)
{
	if(rear == n - 1){
		rear = 0;
		if(rear == front){
			rear = n - 1;
			cout << "Queue Full\nEnqueue Failed\n";
			return;
		}
		else{
			a[rear] = x;
		}
	}
	else{
		if(rear + 1 == front){
			cout << "Queue Full\nEnqueue Failed\n";
			return;
		}
		else{
			rear++;
			a[rear] = x;
		}
	}
}
void dequeue()
{
	int x;
	if(rear == front){
		cout << "\nQueue Empty\n\n";
		return;
	}
	else{
		if(front == n - 1){
			front = 0;
			x = a[front];
			cout << x << " dequeued\n\n";
			return;
		}
		else{
			front++;
			x = a[front];
			cout << x << " dequeued\n\n";
			return;
		}
	}
}
void display()
{
	if(rear == front){
		cout << "\nEmpty Queue\n\n";
		return;
	}
	else if(rear > front){
		cout << "\nQueue\n";
		for(int i = front + 1; i <= rear; i++)
			cout << a[i] << " ";
		cout << endl << endl;
	}
	else if(rear < front){
		cout << "\nQueue\n";
		for(int i = front + 1; i < n; i++)
			cout << a[i] << " ";
		for(int i = 0; i <= rear; i++)
			cout << a[i] << " ";
		cout << endl << endl;
	}
}
