#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);
vector<string> split(const string &);

/*
 * Complete the 'miniMaxSum' function below.
 *
 * The function accepts INTEGER_ARRAY arr as parameter.
 */

int minSum = 0;
int maxSum = 0;

int miniMaxIndex(vector<int> arr, int b) {
    int temp = arr[0];
    int idx = 0;
    if (b == 0) {
        for(int i = 0; i < arr.size(); i++) {
            if(arr[i] < temp) {
                temp = arr[i];
                idx = i;
            }
        }
    }
    else {
        for(int i = 0; i < arr.size(); i++) {
            if(arr[i] > temp) {
                temp = arr[i];
                idx = i;
            }
        }
    }
    return idx;
}

void miniMaxSum(vector<int> arr) {
    int i = miniMaxIndex(arr, 0); //0 for min
    vector<int> arrcopy = arr;
    arrcopy[i] = 0;
    for (int i = 0; i < arrcopy.size(); i++) {
        maxSum += arrcopy[i];
    }
    int j = miniMaxIndex(arr, 1); //1 for min
    arr[j] = 0;
    for (int i = 0; i < arrcopy.size(); i++) {
        minSum += arrcopy[i];
    }
}

int main()
{

    string arr_temp_temp;
    getline(cin, arr_temp_temp);

    vector<string> arr_temp = split(rtrim(arr_temp_temp));

    vector<int> arr(5);

    for (int i = 0; i < 5; i++) {
        int arr_item = stoi(arr_temp[i]);

        arr[i] = arr_item;
    }

    miniMaxSum(arr);
    cout << minSum << " " << maxSum << endl;
    return 0;
}

string ltrim(const string &str) {
    string s(str);

    s.erase(
        s.begin(),
        find_if(s.begin(), s.end(), not1(ptr_fun<int, int>(isspace)))
    );

    return s;
}

string rtrim(const string &str) {
    string s(str);

    s.erase(
        find_if(s.rbegin(), s.rend(), not1(ptr_fun<int, int>(isspace))).base(),
        s.end()
    );

    return s;
}

vector<string> split(const string &str) {
    vector<string> tokens;

    string::size_type start = 0;
    string::size_type end = 0;

    while ((end = str.find(" ", start)) != string::npos) {
        tokens.push_back(str.substr(start, end - start));

        start = end + 1;
    }

    tokens.push_back(str.substr(start));

    return tokens;
}
