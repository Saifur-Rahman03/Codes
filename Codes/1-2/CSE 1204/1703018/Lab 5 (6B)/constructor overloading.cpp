#include<iostream>
using namespace std;
class myclass
{
int x;
public:
myclass()
{
    x=5;
    cout<<x<<endl;
}
myclass(int n)
{
    x=n;
}
int getx()
{
    return x;
}
};
int main ()
{
myclass o1;
myclass o2(20);

cout<<"o2: "<<o2.getx()<<'\n';



return 0;
}
