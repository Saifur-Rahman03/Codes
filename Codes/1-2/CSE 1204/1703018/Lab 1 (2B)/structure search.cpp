#include <iostream>
using namespace std;

struct
{
    int r;
    string name;
    string dept;
}student[100];

int main()
{
    int i, n, r1;

    cout <<"How many students? ";
    cin >> n;

    for(i = 0; i < n; i++){
        cout << "Roll no. ";
        cin >> student[i].r;
        cout << "Name: ";
        cin >> student[i].name;
        cout << "Dept.: ";
        cin >> student[i].dept;
    }

    cout << "\nEnter roll no. to get details about the student\n";
    cin >> r1;

    for(i = 0; i < n; i++)
        if(r1 == student[i].r)
            cout << "Roll no. " << student[i].r << endl << "Name: " << student[i].name << endl << "Dept. " << student[i].dept << endl;


    return 0;
}
