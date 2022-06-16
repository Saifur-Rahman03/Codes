#include <iostream>

using namespace std;

double MarkAsPercentage(int correct, int wrong);

int main( )
{
       int ca, wa;
       double marks;

       cout << "No. of questions that answered correctly: ";
       cin >> ca;

       cout << "No. of incorrect answer: ";
       cin >> wa;

       marks = MarkAsPercentage(ca, wa);

       cout << "Obtained Number: " << marks << endl;
}
double MarkAsPercentage(int correct, int wrong)
{
       double m;
       m = (1 * correct) - (0.25 *wrong);
       return m;
}
