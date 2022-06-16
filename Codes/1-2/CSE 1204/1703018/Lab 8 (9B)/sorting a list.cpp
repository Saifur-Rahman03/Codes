#include <iostream>
#include <list>
#include <cstdlib>
using namespace std;

int main()
{
    list <char> l;
    int i;

    for(i = 0; i < 10; i++)
        l.push_back('A' + (rand() % 26));
    cout << "Original contents: \n";
    list <char> :: iterator p = l.begin();
    while(p != l.end()){
        cout << *p;
        p++;
    }
    cout << endl << endl;
    l.sort();
    cout << "Sorted Contents: \n";
    p = l.begin();
    while(p != l.end()){
        cout << *p;
        p++;
    }

    return 0;
}
