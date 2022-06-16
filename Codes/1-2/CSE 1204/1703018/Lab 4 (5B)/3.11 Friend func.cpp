#include <iostream>
#include <cstdlib>
#include <cctype>
using namespace std;

class m
{
public:
    friend m add(m a1, m a2);
    friend bool equal(m a1, m a2);
    m(long d, int c);
    m(long d);
    m( );
    double getvalue( );
    void input(istream &ins);
    void output(ostream &outs);
private:
    long allc;
};
int dtoint(char c);

int main( )
{
    m ya, ma(10, 9), oa;
    cout << "Enter an amount of money: ";
    ya.input(cin);
    cout << "Your amount: ";
    ya.output(cout);
    cout << endl;
    cout << "My amount: ";
    ma.output(cout);
    cout << endl;

    if(equal(ya, ma))
        cout << "We have the same amount\n";
    else
        cout << "One of us is richer\n";

    oa = add(ya, ma);
    ya.output(cout);
    cout << " + ";
    ma.output(cout);
    cout << " equals ";
    oa.output(cout);
    cout << endl;

    return 0;
}
m add(m a1, m a2)
{
    m temp;
    temp.allc = a1.allc + a2.allc;
    return temp;
}

bool equal(m a1, m a2)
{
    return (a1.allc == a2.allc);
}
m :: m(long d, int c)
{
    if(d * c < 0){
        cout << "Illegal values\n";
        exit(1);
        }
    allc = d * 100 + c;
}
m :: m(long d): allc(d * 100)
{

}
m :: m( ): allc(0)
{

}
double m:: getvalue( )
{
    return (allc * 0.01);
}
void m :: input(istream &ins)
{
    char oneChar, decimalPoint, d1, d2;
    long d;
    int c;
    bool neg;
    ins >> oneChar;
    if(oneChar == ' ')
    {
        neg = true;
        ins >> oneChar;
    }
    else{
        neg = false;
    }
    ins >> d >> decimalPoint >> d1 >> d2;
    if(oneChar != '$' || decimalPoint != '.' || !isdigit(d1) || !isdigit(d2))
    {
        cout << "Error";
        exit(1);
    }
    c = dtoint(d1) * 10 + dtoint(d2);
    allc = d * 100 + c;
    if(neg)
        allc = - allc;
}
void m :: output(ostream &outs)
{
    long posc, d, c;
    posc = labs(allc);
    d = posc / 100;
    c = posc % 100;

    if(allc < 0)
        outs << "-$" << d << ".";
    else
        outs << "$" << d << ".";

    if(c < 10)
        outs << "0";
    outs << c;
}
int dtoint(char c)
{
    return (static_cast<int>(c) - static_cast<int>('0'));
}
