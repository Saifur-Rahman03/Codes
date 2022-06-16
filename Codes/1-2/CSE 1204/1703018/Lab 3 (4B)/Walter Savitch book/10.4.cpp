#include <iostream>
using namespace std;

class DayOfYear
{
public:
    void input( );
    void output( );

    void set(int newMonth, int newDay);

    int getMonth( );
    int getDay( );
private:
    void checkdate( );
    int month;
    int day;
};
int main( )
{
    DayOfYear today, bachBirthday;
    cout << "Enter today's date:\n";
    today.input( );
    cout << "Today's date is: ";
    today.output( );

    bachBirthday.set(3, 21);
    cout << "J.S Bach's Birthday: ";
    bachBirthday.output( );

    if(today.getMonth( ) == bachBirthday.getMonth( ) && today.getDay( ) == bachBirthday.getDay( ))
        cout << "Happy Birthday\n";
    else
        cout << "Happy unBirthday\n";

    return 0;
}
void DayOfYear::input( )
{
    cout << "Enter month as a number: ";
    cin >> month;
    cout << "Enter day as a number: ";
    cin >> day;
    checkdate( );
}
void DayOfYear::output( )
{
    cout << "month = " << month;
    cout << ", day = " << day << endl;
}
void DayOfYear::set(int newMonth, int newDay)
{
    month = newMonth;
    day = newDay;
    checkdate( );
}
void DayOfYear::checkdate( )
{
    if((month < 1) || (month > 12) || (day < 1) || (day > 31)){
        cout << "Illegal date Aborting program\n";
    }
}
int DayOfYear::getMonth()
{
    return month;
}
int DayOfYear::getDay()
{
    return day;
}
