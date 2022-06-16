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
	void delet( );
	void display( );
	int no;
	cout << "How many nodes? ";
	cin >> no;
	create(no);
	display( );
	delet( );
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
void delet( )
{
	int y;
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
		break;
		}
		else{
			p = q;
			q = q -> next;
		}
	}
}
