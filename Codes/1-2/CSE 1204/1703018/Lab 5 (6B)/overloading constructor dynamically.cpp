#include <iostream>
using namespace std;
class myclass
{
    int x;
public:
    myclass( ){x = 10;}
    myclass(int n){x = n;}
    int getx( ){return x;}
    void setx(int n){x = n;}
};
int main( )
{
    myclass *p;
    myclass ob[10];
    myclass(5);
    p = new myclass[10];
    if(!p){
        cout << "Allocation Error\n";
        return 1;
    }
    for(int i = 0; i < 10; i++)
        p[i] = ob[i];
    for(int i = 0; i < 10; i++){
        cout << "p[" << i << "]:" << p[i].getx( ) << endl;
    }
}
