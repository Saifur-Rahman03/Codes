#include <iostream>
using namespace std;

int main()
{
    int i, j, n;
    double arr[100], temp;

    cout << "How many numbers? ";
    cin >> n;

    cout << "\nEnter numbers\n";

    for(i = 0; i < n; i++)
        cin >> arr[i];

    cout << "\nNumbers in Ascending Order using insertion sort\n\n";

    for(i = 0; i < n; i++){
        for(j = i; j < n; j++){
            if(arr[i] > arr[j]){
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }

    for(i = 0; i < n; i++)
        cout << arr[i] << " " << endl;

    cout << "\nNumbers in Descending Order using insertion sort\n\n";

    for(i = 0; i < n; i++){
        for(j = i; j < n; j++){
            if(arr[i] < arr[j]){
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }

    for(i = 0; i < n; i++)
        cout << arr[i] << " " << endl;

    return 0;
}
