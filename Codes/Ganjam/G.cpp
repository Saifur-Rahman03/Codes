#include<iostream>
using namespace std;
class stack
{
    char stck[101];
    int t = 0;
public:
    void init();
    void push(char a);
    char pop();
};
void stack::push(char a)
{
    stck[t]=a;
    t++;
}
char stack::pop()
{
    t--;
    return stck[t];

}
int main()
{
    int a,i,n,j,k;
    stack s1;
    cin>>a;
    for(i=0; i<a; i++)
    {
        cin>>n;
        for(j=0; j<n; j++)
        {

            s1.push('y');

        }
        cout<<"Case " << i + 1 << ": Harr";
        for(k=0; k<n; k++)
        {
            cout<<s1.pop();
        }
        cout<<"! Khelbe Hogwarts, Jitbe Hogwarts!\n";
    }
    return 0;
}
