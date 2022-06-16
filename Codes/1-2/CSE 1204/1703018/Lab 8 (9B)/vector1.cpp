#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> v(5, 1);
    int i;

    cout << "Size: " << v.size() << endl;
    cout << "Original contents:\n";
    for(i = 0; i < v.size(); i++)
        cout << v[i] << " ";
    cout << endl;

    vector<int> :: iterator p = v.begin();
    p += 2;

    v.insert(p, 10, 9);
    cout << "Size after insert: " << v.size() << endl;
    cout << "Contents after insert:\n";
    for(i = 0; i < v.size(); i++)
        cout << v[i] << " ";
    cout << endl;
    p = v.begin();
    p += 2;
    v.erase(p, p + 10);
    cout << "Size after erase: " << v.size() << endl;
    cout << "Contents after delete:\n";
    for(i = 0; i < v.size(); i++)
        cout << v[i] << " ";
    cout << endl;

    return 0;
}
