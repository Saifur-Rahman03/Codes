#include <iostream>
using namespace std;
struct node
{
	int data;
	struct node *next;
};
struct node *p, *q, *h;
int n;
void create(int n);
void insert();
void Delete();
void display();
int main()
{
	int no;
	while(1){
		cout << "1. create\n2. insert\n3. delete\n4. display\n5. Exit\n\n";
		cin >> no;
		cout << endl;
		if(no == 1){
			cout << "Enter no of nodes: ";
			cin >> n;
			create(n);
		}
		if(no == 2)
			insert();
		if(no == 3)
			Delete();
		if(no == 4)
			display();
		if(no == 5)
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
		p->data = x;
		if(h == 0)
			h = p;
		if(q != 0)
			q->next = p;
		q = p;
	}
	q->next = h;
	cout << endl;
}
void insert()
{
	int x, y, f = 1;
	q = h;
	cout << "After which element: ";
	cin >> y;
	while((q != h) || (f != 0)){
		if(q->data == y){
			p = new node;
			cout << "Enter x: ";
			cin >> x;
			p->data = x;
			p->next = q->next;
			q->next = p;
			break;
		}
		else{
			q = q->next;
			f = 0;
			}
	}
	cout << endl;
}
void Delete()
{
	int y;
	q = h->next;
	p = h;
	cout << "Enter delete element: ";
	cin >> y;
	while(q != h){
		if(q->data == y){
			p->next = q->next;
		}
		p = q;
		q = q->next;
	}
	cout << endl;
}
void display()
{
	p = h;
	cout << "\nList\n" ;
	do{
		cout << "->" << p->data;
		p = p->next;
	}while(p != h);
	cout << endl << endl;
}
