# include <bits/stdc++.h>

using namespace std;

int main()
{
    string s = "www.abc.xy";
    int k = 26;
    for(int i = 0; i < s.size(); i++) {
        int ch = s[i];
        cout << ch << endl;
    }
    for(int i = 0; i < s.size(); i++) {
        char ch = s[i];
        if(ch >= 65 && ch <= 90) {
            ch += (k % 26);
            if(ch > 90) {
                ch = ch - 26;
            }
        }
        if(ch >= 97 && ch <= 122) {
            if(ch > 122) {
                ch = ch - 26;
            }
            s[i] = char(ch);
        }

    }
    cout << s << endl;
}
