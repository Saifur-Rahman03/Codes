#include <iostream>
using namespace std;
struct node
{
	int data;
	struct node *next;
};
int n;
struct node *a[1000];
struct node *p;
void insert( );
void display( );
int count = 0;
int main()
{
	int i, no;
	cout << "Enter the size of array: ";
	cin >> n;
	for(i = 0; i < 1000; i++)
		a[i] = 0;
	while(1){
		cout << "1. insert\n2. display\n3. exit\n\n";
		cin >> no;
		cout << endl << endl;
		if(no == 1)
			insert();
		if(no == 2)
			display();
		if(no == 3)
			break;
	}
	return 0;
}
void insert()
{
	if(count == n){
		cout << "Array full\n";
		return;}
	int k, j, i;
	cout << "Enter the element: ";
	cin >> k;
	//for(i = 0; i < n; i++){
		j = k % n;
		p = new node;
		p->data = k;
		p->next = a[j];
		a[j] = p;
		count++;
	//}
}
void display()
{
	if(count == 0){
		cout << "Array empty\n";
		return;
	}
	for(int i = 0; i < n; i++){
		p = a[i];
		cout << "\na[" << i << "] -> ";
			while(p != 0){
				cout << p->data << " ";
				p = p->next;
		}
	}
	cout << endl;
}
