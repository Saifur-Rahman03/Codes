#include <iostream>
#include <cstdlib>
using namespace std;

class array
{
    int *p;
    int siz;
public:
    array(int sz){
        p = new int[sz];
        if(!p) exit(1);
        siz = sz;
        cout << "Using normal constructor\n";
    }
~array( ){delete [] p;}
array(const array &a);

void put(int i, int j)
{
    if(i >= 0 && i < siz)
        p[i] = j;
}
int get(int i)
{
    return p[i];
}
};
array :: array(const array &a)
{
    int i;
    siz = a.siz;
    p = new int[a.siz];
    if(!p) exit(1);
    for(i = 0; i < a.siz; i++)
        p[i] = a.p[i];
    cout << "Using copy constructor\n";
}
int main( )
{
    array num(10);
    int i;

    for(i = 0; i < 10; i++)
        num.put(i, i);
    for(i = 9; i >=0; i--)
        cout << num.get(i);
    cout << "\n";

    array x = num;

    for(i = 0; i < 10; i++)
        cout << x.get(i);

    return 0;
}
