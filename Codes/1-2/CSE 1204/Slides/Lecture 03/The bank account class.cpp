#include <iostream>
using namespace std;
class BankAccount
{
public:
	void set(int d, int c, double r);
	void set(int d, double r);
	void update( );
	double getBal( );
	double getRate( );
	void output(ostream& outs);

private:
	double bal;
	double intRate;
	double frac(double percent);
};
int main( )
{
	BankAccount a1, a2;
	int d1, d2, c1, c2;
	double r1, r2;
	cout << "Start of Test:\n";
	cout << "Enter amount of dollars: ";
	cin >> d1;
	cout << "Enter amount of cents: ";
	cin >> c1;
	cout << "Enter rate: ";
	cin >> r1;
	a1.set(d1, c1, r1);
	cout << "account1 initial statement:\n";
	a1.output(cout);
	cout << "Enter amount of dollars: ";
	cin >> d2;
	cout << "Enter rate: ";
	cin >> r2;
	a1.set(d2, r2);
	cout << "account1 with new setup:\n";
	a1.output(cout);
	a1.update( );
	cout << "account1 after update:\n";
	a1.output(cout);
	a2 = a1;
	cout << "account2:\n";
	a2.output(cout);
	return 0;
}
void BankAccount :: set(int d, int c, double r)
{
	if ((d < 0) || (c < 0) || (r < 0)){
		cout << "Illegal values for money or interest rate.\n";
		return;
	}
	bal = d + 0.01*c;
	intRate = r;
}
void BankAccount :: set(int d, double r)
{
	if ((d < 0) || (r < 0)){
		cout << "Illegal values for money or interest rate.\n";
 		return;
	}
	bal = d;
	intRate = r;
}
void BankAccount :: update( )
{
	bal = bal + frac(intRate) * bal;
}
double BankAccount :: frac(double pv)
{
	return (pv / 100.0);
}
double BankAccount :: getBal( )
{
	return bal;
}
double BankAccount :: getRate( )
{
	return intRate;
}
void BankAccount :: output(ostream& outs)
{
	outs.setf(ios :: fixed);
	outs.setf(ios :: showpoint);
	outs.precision(2);
	outs << "Account balance $" << bal << endl;
	outs << "Interest rate " << intRate << "%" << endl;
}
