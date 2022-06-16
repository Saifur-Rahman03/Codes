#include <iostream>
#include <string>
using namespace std;

#define SIZE 10

class stack{
    string stck;
    int tos;
public:
    stack();
    void push(char ch);
    char pop();
};

int main()
{
    stack s1;
    int i, n;
    string s;

    cout << "Enter a word to push on stack\n";
    cin >> s;

    for(i = 0; i < s.length(); i++)
        s1.push(s[i]);
    cout << "How many times you want to pop\n";
    cin >> n;
    if(n > s.length()){
        cout << "Invalid input\n";
        return 0;
    }
    for(i = 0; i < n; i++)
        cout << "Pop no" << i + 1 << ": " << s1.pop() << endl;


    return 0;
}
stack :: stack()
{
    cout << "Constructing a stack\n";
    tos = 0;
}
void stack :: push(char ch)
{
    if(tos == SIZE){
        cout << "Stack is Full\n";
        return;
    }
    stck[tos] = ch;
    tos++;
}
char stack :: pop()
{
    if(tos == 0){
        cout << "Stack is empty\n";
        return 0;
    }
    tos--;
    return stck[tos];
}
