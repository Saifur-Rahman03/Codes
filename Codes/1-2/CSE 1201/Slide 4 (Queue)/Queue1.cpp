#include <iostream>
using namespace std;

int a[5], rear = 0, front = 0, n = 5;
int x;
void enqueue(int x);
void dequeue();
void display();

int main()
{
	int no, i;

	while(1)
	{
		cout << "1.Enqueue\n2.Dequeue\n3.Display\n4.Exit\n\n";
		cin >> no;

		if(no == 1){
			cin >> x;
			enqueue(x);}
		if(no == 2){
			dequeue();
			cout << x << endl;}
		if(no == 3)
			display();
		if(no == 4)
			break;
	}
}
void enqueue(int x)
{
	if((rear + 1) % n == front)
		cout << "Queue Full\n";
	else
	{
		rear = (rear + 1) % n;
		a[rear] = x;

	}
}
void dequeue()
{
	if(rear == front)
		cout << "Queue Empty\n";
	else{
		front = (front + 1) % n;
		x = a[front];
	}
}
void display()
{
	int i;
	if(front < rear){
		for(i = front + 1; i <= rear; i++)
			cout << a[i] << " ";
		cout << endl;}
	else if(rear < front){
		for(i = front + 1; i < n; i++)
			cout << a[i] << " ";
		for(i = 0; i <= rear; i++)
			cout << a[i] << " ";
		cout << endl;
		}
}

