#include <iostream>
using namespace std;
class DayOfYear
{
public:
	void output( );
	int m;
	int d;
};
int main( )
{
	DayOfYear today, bday;
	cout << "Enter today's date:\n";
	cout << "Enter month as a number: ";
	cin >> today.m;
	cout << "Enter the day of the month: ";
	cin >> today.d;
	cout << "Enter your birthday:\n";
	cout << "Enter month as a number: ";
	cin >> bday.m;
	cout << "Enter the day of the month: ";
	cin >> bday.d;
	cout << "Today's date is ";
	today.output( );
	cout << "Your birthday is ";
	bday.output( );
 	if (today.m == bday.m && today.d == bday.d)
 		cout << "Happy Birthday!\n";
 	else
		cout << "Not your birthday!\n";
	return 0;
}
void DayOfYear::output( )
{
	cout << "month = " << m
	<< ", day = " << d << endl;
}
