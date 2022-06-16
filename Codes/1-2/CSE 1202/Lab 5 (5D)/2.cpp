#include <iostream>
using namespace std;

struct node
{
	int data;
	struct node *next;
};
struct node *h;
struct node *p, *q;
int main( )
{
	void create(int n);
	void insert( );
	void display( );
	int no;
	cout << "How many nodes? ";
	cin >> no;
	create(no);
	display( );
	insert( );
	display( );
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
	p = h;
	while(p != 0){
		cout << "-->" << p -> data << " ";
		p = p -> next;
	}
	cout << endl;
}
void insert( )
{
	int x, y;
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
			break;
		}
		else
			q = q -> next;
	}
}
