#include <iostream>
#include <vector>

using namespace std;

int main()
{
    cout << "Hello" << endl;
    int x;
    cin >> x;
    cout << x << endl;

    vector<int> vc;
    vc.push_back(7);
    cout << vc[0];
}