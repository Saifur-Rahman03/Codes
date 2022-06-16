#include <iostream>
using namespace std;
struct node
{
	int data;
	struct node *next;
};
struct node *p, *q, *h;
void create(int n);
void insert();
void Delete();
void display();
int main()
{
	int no, n;
	cout << "no of elements = ";
	cin >> n;
	create(n);
	while(1){
		cout << "\n1. insert\n2. display\n3. delete\n4. exit\n";
		cin >> no;
		if(no == 1)
			insert();
		if(no == 2)
			display();
		if(no == 3)
			Delete();
		if(no == 4)
			break;
	}
	return 0;
}
void create(int n)
{
	int i, x;
	h = 0, q = 0;
	for(i = 0; i < n; i++){
		p = new node;
		cout << "Enter element: ";
		cin >> x;
		p->data = x;
		if(h == 0)
			h = p;
		if(q != 0)
			q->next = p;
		q = p;
	}
	q->next = 0;
}
void display()
{
	p = h;
	cout << "The list is\n";
	while(p != 0){
		cout << "-->" << p->data;
		p = p->next;
	}
	cout << endl;
}
void insert()
{
	q = h;
	int x, y;
	cout << "after which element: ";
	cin >> y;
	while(q != 0){
		if(q->data == y){
			p = new node;
			cout << "Enter element: ";
			cin >> x;
			p->data = x;
			p->next = q->next;
			q->next = p;
			break;
		}
		else
			q = q->next;
	}
}
void Delete()
{
	q = h;
	p = 0;
	int y;
	cout << "Enter delete element: ";
	cin >> y;
	while(q != 0){
		if(q->data == y){
			if(q == h)
				h = h->next;
			else
				p->next = q->next;
			break;
		}
		else{
			p = q;
			q = q->next;
		}
	}
}
