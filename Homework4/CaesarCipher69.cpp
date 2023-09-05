#include <bits/stdc++.h>

using namespace std;

string s, t;

int main() {
    cin >> s >> t;
    for (int i = 0; i < s.size(); i++) {
        if (s[i] - t[i] == s[i+1] - t[i+1]) {
            continue;
        }
        else {
            break;
            cout << "No";
        }
    }
    cout << "Yes";
    return 0;
}
