#include <iostream>
using namespace std;

int main( )
{
    int c1, c2, c3, c4, temp;
    double avg;

    cout << "Enter CT marks\n";
    cout << "\nFirst CT: ";
    cin >> c1;
    cout << "\nSecond CT: ";
    cin >> c2;
    cout << "\nThird CT: ";
    cin >> c3;
    cout << "\nLast CT: ";
    cin >> c4;

    temp = c1;

    if(temp >= c2)
        temp = c2;
    if(temp >= c3)
        temp = c3;
    if(temp >= c4)
        temp = c4;

    avg = (c1 + c2 + c3 + c4 - temp) / 3;

    cout << "\n\nCT marks: " << avg << endl;


    return 0;
}
