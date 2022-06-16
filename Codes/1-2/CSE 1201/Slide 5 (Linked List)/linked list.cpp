#include <iostream>
using namespace std;
struct node
{
	int data;
	struct node *next;
};
struct node *h;
int n;
void create(int n);
void display();
void insert();
void Delete();
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
	struct node *p, *q;
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
void display()
{
	struct node *p;
	p = h;
	cout << "\nList\n";
	while(p != 0){
		cout << "-->" << p -> data;
		p = p -> next;}
	cout << endl << endl;
}
void insert()
{
	struct node *p, *q;
	int x, y;
	q = h;
	cout << "After which element: ";
	cin >> y;
	while(q != 0){
		if(q -> data == y){
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
void Delete()
{
	struct node *p, *q;
	int y;
	q = h;
	p = 0;
	cout << "Enter delete element: ";
	cin >> y;
	while(q != 0){
		if(q -> data == y){
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
