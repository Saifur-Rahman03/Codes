//to gain flexibility
#include <iostream>
using namespace std;
class myclass{
    int a;
public:
    myclass( ){a = 0;}
    myclass(int i){a = i;}
    int get_a( ){return a;}
};
int main( )
{
    myclass obj(10);
    myclass obj1;
    cout << obj.get_a( ) << endl << obj1.get_a( ) << endl;
    return 0;
}
