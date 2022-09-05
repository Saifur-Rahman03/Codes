#include<iostream>
#include<cmath>
using namespace std;

int main()
{
    long int i;
    cout<<"|_2x_| = |_x_| |_x+1/2_| -this statement is ";
    for (i=-10000; i<=10000; i++) {
        if ( floor(2*i) != floor(i)+floor(i+1/2) ) {
            cout<<"false\n";
            return 0;
        }
    }
    cout<<"true\n";
    return 0;
}
