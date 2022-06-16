#include <iostream>
using namespace std;
class BA
{
public:
    BA(int d, int c, double r);
    BA(int d, double r);
    BA( );
    void set(int d, int c, double r);
    void set(int d, double r);
    void update( );
    double getbal( );
    double getrate( );
    void output(ostream &outs);
private:
    double bal;
    double intrate;

    double frac(double per);
};
int main()
{
    BA a1(100, 2.3), a2;

    cout << "account1 initialized as follows:\n";
    a1.output(cout);
    cout << "account2 initialized as follows:\n";
    a2.output(cout);

    a1 = BA(999, 99, 5.5);
    cout << "a1 reset to the following:\n";
    a1.output(cout);

    return 0;
}
BA::BA(int d, int c, double r)
{
    if((d < 0) || (c < 0) || (r < 0)){
        cout << "Illegal values for money or interest rate.\n";
        return;
    }
    bal = d + 0.01 * c;
    intrate = r;
}
BA::BA(int d, double r)
{
    if((d < 0) || (r < 0)){
        cout << "Illegal values for money or interest rate.\n";
        return;
    }
    bal = d;
    intrate = r;
}
BA::BA( ) : bal(0), intrate(0.0)
{

}
void BA::update()
{
    bal += frac(intrate) * bal;
}
double BA::frac(double per)
{
    return (per / 100.0);
}
double BA::getbal()
{
    return bal;
}
double BA::getrate()
{
    return intrate;
}
void BA::output(ostream &outs)
{
    outs.setf(ios::fixed);
    outs.setf(ios::showpoint);
    outs.precision(2);
    outs << "Account balance $" << bal << endl;
    outs << "Interest rate " << intrate << "%" << endl;
}

