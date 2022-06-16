#include <iostream>
using namespace std;
class ord
{
    int x;
public:
    void getx(int i){x = i;}
    void print(){cout << x << endl;}
    ord operator +(ord ob);
    ord operator -(ord ob);
    ord operator *(ord ob);
    ord operator /(ord ob);
};
int main()
{
    ord ob;
    ord ob1, ob2;
    ob1.getx(12);
    ob2.getx(3);
    cout << "ob1 = ";
    ob1.print();
    cout << "ob2 = ";
    ob2.print();
    ob = ob1 + ob2;
    cout << "ob1 + ob2 = ";
    ob.print();
    ob = ob1 - ob2;
    cout << "ob1 - ob2 = ";
    ob.print();
    ob = ob1 * ob2;
    cout << "ob1 * ob2 = ";
    ob.print();
    ob = ob1 / ob2;
    cout << "ob1 / ob2 = ";
    ob.print();
    return 0;
}
ord ord :: operator +(ord ob)
{
    ord temp;
    temp.x = x + ob.x;
    return temp;
}
ord ord :: operator -(ord ob)
{
    ord temp;
    temp.x = x - ob.x;
    return temp;
}
ord ord :: operator *(ord ob)
{
    ord temp;
    temp.x = x * ob.x;
    return temp;
}
ord ord :: operator /(ord ob)
{
    ord temp;
    temp.x = x / ob.x;
    return temp;
}
