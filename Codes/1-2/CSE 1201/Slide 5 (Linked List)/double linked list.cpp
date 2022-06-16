#include <iostream>
using namespace std;
struct node
{
	int data;
	struct node *next;
	struct node *prev;
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
