#include <iostream>
#include <string>

using namespace std;

int main( )
{
    string str[100], s;
    int i, n, r;

    cout << "How many strings? ";
    cin >> n;

    for(i = 0; i < n; i++)
        cin >> str[i];

    cout << "Enter the string you want to search?\n";
    cin >> s;

    for(i = 0; i < n; i++)
        if(s == str[i])
            r = i;

    cout << "The string " << s << "is on " << r + 1 << "th position\n" << endl;
}
