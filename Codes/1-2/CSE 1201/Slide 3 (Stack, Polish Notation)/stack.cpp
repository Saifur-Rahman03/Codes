#include <iostream>
using namespace std;
int a[100], n, top = -1;
void push(int y);
void pop();
void display();
int main( )
{
	int i, x, y;
       cout << "Enter your array size: ";
       cin >> n;
       cout << endl;
	while(1){
		cout << "1. push\n2. pop\n3. Display\n4. End\n\n";
		cin >> x;
		cout << endl;
		if(x == 1){
			cout << "Enter value to push: ";
			cin >> y;
			push(y);
			cout << endl;
		}
		if(x == 2)
			pop();
		if(x == 3)
			display();
		if(x == 4)
			break;
	}
	return 0;
}
void push(int y)
{
	if(top < n - 1){
		top++;
		a[top] = y;
	}
	else
		cout << "\nStack Full\n\n";
}
void pop()
{
	if(top < 0)
		cout << "\nStack Empty\n\n";
	else{
		cout << a[top] << " popped\n\n";
		top--;
	}
}
void display()
{
	if(top < 0){
		cout << "\nArray Empty\n\n";
		return;}
	cout << "Array:\n";
	for(int i = 0; i <=  top; i++)
		cout << a[i] << " ";
	cout << endl << endl;
}
