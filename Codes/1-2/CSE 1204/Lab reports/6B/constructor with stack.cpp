#include <iostream>
using namespace std ;
# define SIZE 100
class stack
{
	char stck [SIZE];
	int top;
public :
	stack ( );
	void push (char ch);
	char pop ( );
};

stack :: stack ()
{
cout << " Constructing a stack \n";
top = 0;
}
void stack :: push (char ch)
{
	if(top == SIZE)
	{
		cout << " Stack is full \n";
		return;
	}
		stck[top] = ch;
		top++;
}
char stack :: pop ()
{
	if(top == 0)
	{
		cout << " Stack is empty \n";
		return 0;
	}
	top --;
	return stck [top];
}
int main ()
{
	stack s;
	int i, n1, n2;
	char c;
	cout << "How many times you want to push? ";
	cin >> n1;
	cout << endl;
	cout << "Enter characters\n";
	for(i = 0; i < n1; i++){
			cin >> c;
			s.push(c);
	}
	cout << "How many times you want to pop? ";
	cin >> n2;
	cout << endl;
	for (i =0; i < n2; i ++)
		cout << "Pop s: " << s.pop () << endl;

	return 0;
}
