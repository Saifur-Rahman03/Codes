#include <iostream>
 using namespace std;

 struct
{
    int r;
    string name;
    string dept;
    double cg;
}student[100], temp;


 int main()
 {
    int i, j, n, r1;

    cout <<"How many students? ";
    cin >> n;

    for(i = 0; i < n; i++){
        cout << "\n";
        cout << "Roll no. ";
        cin >> student[i].r;
        cout << "Name: ";
        cin >> student[i].name;
        cout << "Dept.: ";
        cin >> student[i].dept;
        cout << "CGPA: ";
        cin >> student[i].cg;
        cout << "\n";
    }
    for(i = 0; i < n-1; i++){
        for(j = i + 1; j < n; j++){
            if(student[i].cg > student[j].cg){
                temp = student[i];
                student[i] = student[j];
                student[j] = temp;
            }
        }
    }

    cout << "\n\n";
    for(i = 0; i < n; i++)
        cout << "Roll no. " << student[i].r << endl << "Name: " << student[i].name << endl << "Dept. " << student[i].dept << endl;

    return 0;

 }
