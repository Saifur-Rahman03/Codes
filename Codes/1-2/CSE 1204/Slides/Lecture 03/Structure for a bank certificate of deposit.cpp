#include <iostream>
using namespace std;
struct CdAc
{
	double bal;
	double intrate;
	int term;
};
void getData(CdAc &theAc);
int main( )
{
	CdAc acc;
	getData(acc);
	double ratefrac, interest;
	ratefrac = acc.intrate / 100.00;
	interest = acc.bal * ratefrac * (acc.term / 12.0);
	acc.bal = acc.bal + interest;
	cout.setf(ios::fixed);
	cout.setf(ios::showpoint);
	cout.precision(2);
	cout << "When your CD matures in "
	<< acc.term << " months,\n"
	<< "it will have a balance of $"
	<< acc.bal << endl;
}
void getData(CdAc &theAc)
{
	cout << "Enter account balance: $ ";
	cin >> theAc.bal;
	cout << "Enter account interest rate: ";
	cin >> theAc.intrate;
	cout << "Enter the number of months until maturity\n"
		 << "(12 months or fewer)\n";
	cin >> theAc.term;
}
