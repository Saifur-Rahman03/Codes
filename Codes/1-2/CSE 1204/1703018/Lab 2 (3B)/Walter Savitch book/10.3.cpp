#include <iostream>
using namespace std;

class DayOfYear
{
public:
    void output( );
    int month;
    int day;
};

int main( )
{
    DayOfYear today, birthday;

    cout << "Enter today,s date: \n";
    cout << "Enter month as a number: \n";
    cin >> today.month;
    cout << "Enter the day of the month: \n";
    cin >> today.day;
    cout << "Enter your birthday: \n";
    cout << "Enter month as a number: \n";
    cin >> birthday.month;
    cout << "Enter the day of the month: \n";
    cin >> birthday.day;

    cout << "Today's day is ";
    today.output( );
    cout << "Your Birthday is ";
    birthday.output( );

    if(today.month == birthday.month && today.day == birthday.day)
        cout << "\nHappy Birthday\n";
    else
        cout << "\nIt's someone else's birthday\n";

    return 0;
}

void DayOfYear :: output( )
{
    cout << "month = " << month;
    cout << ", day = " << day << endl;
}
