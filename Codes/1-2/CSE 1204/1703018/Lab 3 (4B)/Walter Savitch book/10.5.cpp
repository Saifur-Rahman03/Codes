#include <iostream>
using namespace std;
class BA
{
public:
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
    BA a1, a2;
    cout << "Start of Test:\n";
    a1.set(123, 99, 3.0);
    cout << "account1 initial statement:\n";
    a1.output(cout);
    a1.set(100,5.0);
    cout << "account1 with new setup:\n";
    a1.output(cout);

    a1.update();
    cout << "account1 after update:\n";
    a1.output(cout);

    a2 = a1;
    cout << "account2:\n";
    a2.output(cout);

    return 0;
}
void BA::set(int d, int c, double r)
{
    if((d < 0) || (c < 0) || (r < 0)){
        cout << "Illegal values for money or interest rate.\n";
        return;
    }
    bal = d + 0.01 * c;
    intrate = r;
}
void BA::set(int d, double r)
{
    if((d < 0) || (r < 0)){
        cout << "Illegal values for money or interest rate.\n";
        return;
    }
    bal = d;
    intrate = r;
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
