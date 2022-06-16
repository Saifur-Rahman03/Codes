#include <iostream>
#include <string>

using namespace std;

void newline( );

int main( )
{
    string firstName, lastName, recordName;
    string motto = "Your records are our records.";

    cout << "Enter your first name and last name: \n";
    cin >> firstName >> lastName;
    newline( );

    recordName = lastName + ", " + firstName;

    cout << "Your name in our records is: \n";
    cout << recordName << endl;

    cout << "Our motto is\n"
         << motto << endl;
    cout << "Please suggest a better motto: \n";
    getline(cin, motto);

    cout << "Our new motto will be \n";
    cout << motto << endl;

    return 0;
}

void newline( )
{
    char nextChar;
    do
    {
        cin.get(nextChar);
    }while(nextChar != '\n');
}
