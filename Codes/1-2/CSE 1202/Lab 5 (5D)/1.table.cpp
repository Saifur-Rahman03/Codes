#include <iostream>
using namespace std;

struct node
{
	int data;
	struct node *next;
};
struct node *h;
struct node *p, *q;
int flag = 1, count = 0;
int main( )
{
	void create(int n);
	void insert( );
	void display( );
	void delet( );
	int no, n0;
	while(1){
		cout << "1. Create\n2. Insert\n3. Delete\n4. Display\n5. Exit\n\tChoose your option\n";
		cin >> n0;
		if(n0 == 1){
			cout << "How many nodes? ";
			cin >> no;
			count = no;
			create(no);
			flag = 1;
		}
		if(n0 == 2)
			insert( );
		if(n0 == 3)
			delet( );
		if(n0 == 4)
			display( );
		if(n0 == 5)
			break;
	}
}
void create(int n)
{
	int i, x;
	h = 0, q = 0;
	for(i = 0; i < n; i++){
		p = new node;
		cout << "Enter x: ";
		cin >> x;

		p -> data = x;
		if(h == 0)
			h = p;
		if(q != 0)
			q -> next = p;
		q = p;
	}
	q -> next = 0;
}
void display( )
{
	struct node *p;
	if(flag == 0 || count == 0){
		cout << "No Linked List\n\n";
		return;
	}
	p = h;
	while(p != 0){
		cout << "-->" << p -> data << " ";
		p = p -> next;
	}
	cout << endl;
}
void insert( )
{
	int n1, x, y;
	if(flag == 0 || count == 0){
		cout << "No Linked List\n\n";
		return;
	}
	cout << "1. Before\n2. After\n";
	cin >> n1;
	if(n1 == 1){
		p = new node;
		cout << "Enter x: ";
		cin >> x;

		p -> data = x;
		p -> next = h;
              h = p;
	}

	if(n1 == 2){
		q = h;
		cout << "Enter y: ";
		cin >> y;

		if(q == 0)
			return;
		while(q != 0){
			if(y == q -> data){
				p = new node;
				cout << "Enter x: ";
				cin >> x;

				p -> data = x;
				p -> next = q -> next;
				q -> next = p;
				count++;
				break;
			}
			else
				q = q -> next;
		}
	}
}
void delet( )
{
	int y;
	if(flag == 0 || count == 0){
		cout << "No Linked List\n\n";
		return;
	}
	q = h;
	p = 0;
	cout << "Enter y: ";
	cin >> y;

	while(q != 0)
	{
		if(q -> data == y)
		{
			if(q == h)
				h = h -> next;
			else
				p -> next = q -> next;
			count--;
			break;
		}
		else{
			p = q;
			q = q -> next;
		}
	}
}
