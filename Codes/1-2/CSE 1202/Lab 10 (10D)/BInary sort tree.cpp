#include <bits/stdc++.h>
using namespace std;
struct node
{
	int data;
	struct node *ll;
	struct node *rl;
};
struct node *p, *q, *h, *s[100];
int top = 0;
void insert(int x);
void search(int k);
void inorder();
void preorder();
int main()
{
	int n, x, k;
	h = 0;
	while(1){
		cout << "Enter data: ";
		cin >> x;
		if(x == 0) break;
		insert(x);
	}
	cout << "Value you want to search: ";
	cin >> k;
	search(k);
	cout << "\ninorder\n";
	inorder();
	cout << "\npreorder\n";
	preorder();

	return 0;
}
void insert(int x)
{
	p = h;
	q = new node;
	printf("%x\n", q);
	q->data = x; q->ll = 0; q->rl = 0;
	if(p == 0){
		h = q;
		return;
		}
	while(1){
	if(p->data >= x){
		if(p->ll == 0){
			p->ll = q;
			printf("Node: %x %d %x\n", p->ll, p->data, p->rl);
			break;
		}
		else
			p = p->ll;
		}
	else{
		if(p->rl == 0){
			p->rl = q;
			printf("Node: %x %d %x\n", p->ll, p->data, p->rl);
			break;}
		else
			p = p->rl;
		}
	}
}
void search(int k)
{
	p = h;
	while(1){
		if(p == 0){
			cout << "Not found\n";
			return;
		}
		else if(p->data == k){
			cout << "Found\n";
			printf("Address of %d is %x\n", p->data, p);
			break;
		}
		else if(p->data > k)
			p = p->ll;
		else if(p->data < k)
			p = p->rl;
	}
}
void inorder()
{
	p = h;
	top = 0;
	while(1){
		if(p != 0){
			top++;
			s[top] = p;
			p = p->ll;
		}
		else{
			if(top != 0){
				p = s[top];
				cout << p->data << " ";
				top--;
				p = p->rl;
			}
		}
		if(p == 0)
			if(top == 0)
				break;
	}
}
void preorder()
{
		p = h;
	top = 0;
	while(1){
		if(p != 0){
			top++;
			s[top] = p;
			cout << p->data << " ";
			p = p->ll;
		}
		else{
			if(top != 0){
				p = s[top];
				top--;
				p = p->rl;
			}
		}
		if(p == 0)
			if(top == 0)
				break;
	}
}
