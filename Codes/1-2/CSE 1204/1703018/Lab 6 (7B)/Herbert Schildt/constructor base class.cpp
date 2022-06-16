#include <iostream>
#include <cstring>
using namespace std;

class mybase{
    char str[80];
public:
    mybase(char *s){strcpy(str, s);}
    char *get(){return str;}
};

class myderived : public mybase{
    myderived(char s) : base(s);
    int len;
public:
    int getlen(){return len;}
    void show(){cout << get() << endl;}
};

int main()
{
    myderived ob("hello.");

    ob.show();
    cout << ob.getlen() << endl;

    return 0;
}
