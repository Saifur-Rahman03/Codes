#include <iostream>
#include <string>

using namespace std;

int main( )
{
    string str[100], temp;
    int i, j, n, r;

    cout << "How many strings? ";
    cin >> n;

    for(i = 0; i < n; i++)
        cin >> str[i];

    cout << "\nStrings in ascending order\n\n";

    for(i = 0; i < n-1; i++){
        for(j = i + 1; j < n; j++){
            if(str[i] > str[j]){
                temp = str[i];
                str[i] = str[j];
                str[j] = temp;
            }
        }
    }

    for(i = 0; i < n; i++)
        cout << str[i] << endl;

    cout << "\nStrings in descending order\n\n";

    for(i = 0; i < n-1; i++){
        for(j = i + 1; j < n; j++){
            if(str[i] < str[j]){
                temp = str[i];
                str[i] = str[j];
                str[j] = temp;
            }
        }
    }

    for(i = 0; i < n; i++)
        cout << str[i] << endl;
}
