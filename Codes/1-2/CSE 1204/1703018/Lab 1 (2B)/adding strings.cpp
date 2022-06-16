#include <iostream>
#include <string>

using namespace std;

int main()
{
    string s1, s2, sout;

    cout << "\nEnter string1: ";
    cin >> s1;

    cout << "\nEnter string2: ";
    cin >> s2;

    sout = s1 + " " + s2;

    cout << sout << endl;

    return 0;
}
