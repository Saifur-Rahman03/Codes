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
class SA : public BA
{
public:
    SA(int d, int c, double r);
    void dep(int d, int c);
    void wd(int d, int c);
private:
};
int main()
{
    SA a(100, 50, 5.5);
    a.output(cout);
    cout << endl;
    cout << "Depositing $10.25." << endl;
    a.dep(10.25);
    a.output(cout);
    cout << endl;
    cout << "Withdrawing $11.80." << endl;
    a.wd(11.80);
    a.output(cout);
    cout << endl;

    return 0;
}
SA::SA(int d, int c, double r):BA(d, c, r)
{

}
void SA::dep(int d, int c)
{
    double bal = getbal();
    bal += d;
    bal += (static_cast<double>(c) / 100);
    int newd = static_cast<int>(bal);
    int newc = static_cast<int>((bal - newd) * 100);

    set(newd, newc, getrate())
}
