#include <iostream>
#include <list>
using namespace std;

int main()
{
    list<char> l;
    list<char> revl;
    int i;

    for(i = 0; i < 10; i++)
        l.push_back('A' + i);
    cout << "Size = " << l.size() << endl;

    list<char>:: iterator p;
    cout << "Contents:\n";

    while(! l.empty())
    {
        p = l.begin();
        cout << *p;
        l.pop_front();
        revl.push_front(*p);
    }
    cout << endl << endl;

    cout << "Size of reverse list = " << revl.size();
    cout << "\nReverse Contents:\n";
    p = revl.begin();
    while(p != revl.end()){
        cout << *p;
        p++;
    }
}
